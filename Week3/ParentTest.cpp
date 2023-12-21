#include <iostream>
#include <stdlib.h>
#include <stack>
#include <string>
using namespace std;

bool signCheck(char a , char b){
	if(a == '(' && b ==')'){
		return true;
	}
	
	if(a == '{' && b == '}'){
		return true;
	}
	
	if(a == '[' && b == ']'){
		return true;
	}
	
	
	return false;
	
}
void find(){
	int n;
	cin>>n;
	stack<char> S[n];
	string input[n];
	for(int i = 0 ; i<n ; i++){
		cin>>input[i];
	}
	
	for(int i = 0 ; i < n ; i++){
		int HK = input[i].length();
		for(int j = 0 ; j<HK ; j++){
			if(input[i][j] == '(' || input[i][j] == '[' ||input[i][j] == '{'){
				S[i].push(input[i][j]);
				continue;
				
			}else{
				if(S[i].empty()){
					S[i].push('A');
					break;
				}else{
				
					if(signCheck(S[i].top() , input[i][j])){

						S[i].pop();
					
				}	
				}
			
			}
		}
	}

	for(int i = 0 ; i< n ; i++){
		if(S[i].empty()){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
			while(!S[i].empty()){
				S[i].pop();
			}
		}
	}
}

int main(){
	find();
}
