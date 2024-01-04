#include <iostream>
#include <vector>
using namespace std;
struct record{
	int quat;
	int value;
	struct record *left;
	struct record *right;
};
typedef struct record node;
int countBB = 0;
node *insert(node *tree , int input){
	if(tree ==NULL){
		tree = new node;
		tree->quat = 0;
		tree->value = input;
		tree->left = NULL;
		tree->right = NULL;
		return tree;
	}else{
		if(input>tree->value){
			tree->right = insert(tree->right,input);
		}else if( input < tree->value){
			tree->left = insert(tree->left,input);
		}
	}
	return tree;
}

int find_min(node *tree){
	int result;
	if(tree->left == NULL){
		return tree->value;
	}else{
		
		result = find_min(tree->left);
	}
	return result;
}

bool find_num(node *tree , int n){
	bool isFind = false;
	if(tree->value == n){
		return true;
	}else{
		if(tree->value < n){
			if(tree->right){
				isFind = find_num(tree->right,n);
			}else{
				return false;
			}
		}else if(tree->value > n){
			if(tree->left){
				isFind = find_num(tree->left,n);
			}else{
				return false;
			}
		}
	}
	return isFind;
}
node *BuyPromo(node *tree , int n){
	bool isFind = false;
	if(tree->value == n){
		tree->quat++;
		countBB++;
	}else{
		if(tree->value < n){
			if(tree->right){
				tree->right = BuyPromo(tree->right,n);
			}else{
				return tree;
			}
		}else if(tree->value > n){
			if(tree->left){
				tree->left = BuyPromo(tree->left,n);
			}else{
				return tree;
			}
		}
	}
	return tree;
}

void InOrder(node *tr){
	if(tr==NULL){
		return;
	}else{
		InOrder(tr->left);
		if(tr->quat%2 != 0){
			cout<<tr->value<<" ";
		}
		InOrder(tr->right);
	}
	return;
}

bool BuyCheck(node *tree){
	bool L = false,R = false;
	if(tree->quat > 0 && tree->quat%2 != 0){
		return true;
	}else{
		if(tree->left){
			L = BuyCheck(tree->left);
		}else if(tree->right){
			R = BuyCheck(tree->right);
		}
	}
	return L||R;
}
int main(){
	int n;
	node *treePromo = NULL;
	cin>>n;
	int promo;
	for(int i = 0 ; i < n ; i++){
		cin>>promo;
		treePromo = insert(treePromo,promo);
	}
	int x;
	cin>>x;
	int itemBuy;
	for(int i = 0 ; i < x ; i++){
		cin>>itemBuy;
		treePromo = BuyPromo(treePromo,itemBuy);
	}
	if(BuyCheck(treePromo)){
		InOrder(treePromo);
	}else{
		cout<<"NO";
	}
}
