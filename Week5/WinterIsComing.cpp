#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int number) {
   if(number < 2){
   	return false;
   }

   for(int i = 2 ; i <= number /2 ; i++){
   		if(number %i == 0){
   			return false;
	   }
   }
   
   return true;
}

void finish(int N , int i){
	if(N == i){
		cout<<"YES";
	}
}

int main(){
	int N,P;
	
	cin>>N>>P;
	int power = P;
	int kon;
	for(int i = 0 ; i < N ; i++){
		cin>>kon;
		if(!isPrime(kon) && P != 0){
			P--;
		}else if(!isPrime(kon) && P == 0){
			cout<<"NO";
			break;
		}else{
			P = power;
		
		}
		finish(N-1,i);
	}
}
