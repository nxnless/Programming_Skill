#include <iostream>
using namespace std;
struct record{
	int value;
	struct record *left;
	struct record *right;
};
typedef struct record node;

node *insert(node *tree , int input){
	if(tree ==NULL){
		tree = new node;
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

node *Find_min(node *tree){
	int result;
	if(tree->left == NULL){
		return tree;
	}else{
		
		return Find_min(tree->left);
	}
}
int main(){
	node *tree = NULL;
	tree = insert(tree,1);
	tree = insert(tree,2);
	tree = insert(tree,3);
	tree = insert(tree,4);
	tree = insert(tree,5);
	tree = insert(tree,6);
	tree = insert(tree,7);
	if(find_num(tree,6)){
		cout<<"found";
	}else{
		cout<<"not found";
	}
		
}
