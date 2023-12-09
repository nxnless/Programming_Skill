#include <iostream>
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

int MaxPrime(int a){
	int max;
	for(int i = 0 ; i <= a ; i++){
		if(isPrime(i) == true){
			max = i;
		}
	}
	return max;
}

int main() {
  	int input;
  	int countM = 1;
  	cin>>input;
  
  	int maxLeft = MaxPrime(input) , maxRight = input +1;
	bool nextMax = true;

	do{
		if(isPrime(maxRight)){
			nextMax = false;
		}else{
			countM++;
			maxRight++;
		}
	}while(nextMax);
	int re = input - maxLeft;
	if(re < countM){
		cout<<re;
	}else{
		cout<<countM;
	}
	  

}

