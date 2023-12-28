#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t,n,k,st;
	cin >> t>>n>>k;
	vector <int> tree;
	tree.assign(t+1,0);
	tree[0] = 1;
	for(int i = 0 ; i < n ; i ++){
		cin>>st;
		int n = st;
		for(int j = 0 ; j<k ; j++){
			if(tree[n] == 0){
				tree[n] = 1;
				n++;
				if(n > t){
					n=1;
				}
			}else{
				do{
					if(tree[n]==0){
						tree[n] = 1;
						break;
					}else{
						n++;
						if(n>t){
							n = 1;
						}
					}
				
				}while(!(tree[n]==0));
			}
		}
	}
	int count = 0;
	for(int i = 1 ; i < tree.size() ; i++){
		if(tree[i] == 0 ){
			count++;
		}
	} 
	cout<<count;
}
