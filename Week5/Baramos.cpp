#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool maggwa(int a , int b){
	return a>b;
}

int main(){
	int N,T;
	cin>>N>>T;
	vector <int> arr;
	int input;
	for(int i = 0 ; i < N ; i++){
		cin>>input;
		arr.push_back(input);
	}
	sort(arr.begin() , arr.end() , maggwa);
	int result = 0;
	
	for(int i = 0 ; i < T ; i++){
		result += arr[i];
	}
	cout<<result;
}
