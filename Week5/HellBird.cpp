#include <iostream>
#include <vector>
using namespace std;

int Max(vector<int> arr){
	int max = arr[0];
	for(int i = 0 ; i <arr.size() ; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int N,T,imax,max;
	cin>>N>>T;
	int tree[N];
	vector <int> result;
	for(int i = 0 ; i<N ; i++){
		cin>>tree[i];
	}
	int j , k;
	result.assign(N,0);
	
	for(int i = 0 ; i<N ; i++){
		j = 0;
		k = i;
		while(j != T){
			result[i] += tree[k];
			k++;
			if(k == N){
				k = 0;
			}
			j++;
		}
	}	
	
	cout<<Max(result);
	
	
}
