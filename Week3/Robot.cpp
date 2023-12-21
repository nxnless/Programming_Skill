#include <iostream>
using namespace std;
int max(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int min(int a , int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}
int main(){
	int x = 0,y = 0;
	int N = 0,S= 0,W= 0,E= 0;
	
	int n;
	string A;
	cin>>A;
	cin >>n;
	
	if(A.length() == n){
		cout<<0;
	}else{
		for(int i = 0 ; i<A.length() ; i++){
			if(A[i] == 'N'){
				x++;	
				N++;
			}if(A[i] == 'S'){
				x--;
				S++;
			}if(A[i] == 'W'){
				y++;
				W++;
			}if(A[i] =='E'){
				y--;
				E++;
			}
		}	
	}
	int result;
	if(((min(N,S)) + min(W,E) - n) > 0 ){
		result = (max(N,S) + max (W,E) - ((min(N,S)) + min(W,E) - n)) ;
	}else{
		result = (max(N,S) + max (W,E) + ((min(N,S)) + min(W,E) - n)) ;
	}
	
	cout<<result*2;
}
