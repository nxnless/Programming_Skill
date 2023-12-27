#include <iostream>
#include <vector>
using namespace std;

bool equalZero(int a , int b){
	return a==0 && b == 0;
}


int main(){
	vector<int> car;
	int n , W , wi,round = 0 , W2;
	do{
		int wT = 0;
	
		cin>>n>>W;
		W2 = W;
		if(equalZero(n,W)){
			break;
		}else{
			car.push_back(0);
			for(int i = 0 ; i<n ; i++){
			cin>>wi;
				if(W2-wi >=0){
					W2 -= wi;
				}else{
					car[round]++;
					W2 = W;
					W2 -= wi;
				}
			}
		}
		round++;
	}while(!equalZero(n,W));
	for(int i = 0 ; i< car.size() ; i++){
		cout<<++car[i]<<endl;
		
	}
}
