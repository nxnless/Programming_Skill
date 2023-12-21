#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	cin>>m;
	int P[n];
	for(int i = 0 ; i<n ; i++){
		cin>>P[i];
	}	
	int late = 1;
	for(int i = 1 ; i<=n ; i++){
		for(int j = 1 ; j <= P[i -1] ; j++){
			if( i == n){
				cout<<late<<" ";
				late ++;
				if(late > m){
					late =1;
				}
			}else{
				late++;
				if(late > m){
					late = 1;
				}
			}
		}
	}
}
