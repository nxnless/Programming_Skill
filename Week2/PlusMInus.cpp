#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int result,num[n],count = 1;
	char sign;
	cin>>result;
	while(count<n){
		cin>>sign;
		cin>>num[count];
		if(sign == '+'){
			result += num[count];
		}
		if(sign == '-'){
			result -= num[count];
		}
		count++;
	}
	cout<<result;
		
	
}
