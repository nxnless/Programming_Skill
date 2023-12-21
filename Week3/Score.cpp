#include <iostream>
using namespace std;

int main(){
	int N,M;
	cin>>N;
	cin>>M;
	int count[N+1];
	int max[N+1];
	for(int i = 0 ; i<N+1 ; i++){
		count[i] = 0;
		max[i] = 0;
	}
	int kor,kanan;
	for(int i = 0 ; i < M ; i++){
		cin>>kor;
		cin>>kanan;
		
		count[kor]++;
		
		if(count[kor] > 5 ){
			max[kor] = 0;
		}else{
			
			if(kanan > max[kor]){
				max[kor] = kanan;
			}
		}
	}
	int result = 0 ;
	for(int i = 0 ; i<N+1 ; i++){
		result += max[i];
	}
	cout<<result;
}
