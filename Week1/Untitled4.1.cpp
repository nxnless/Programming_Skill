#include <iostream>
using namespace std;

bool Prime(int number) {
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


int main() {
  	int input;
  	int CountA  = 0 , CountB = 0;
  	cin>>input;
  	
  	int inputA = input;
  	int inputB = input;
  	bool A , B , IsPrime;
 	A = B = false;
	 
	do{
		if(!A){
			IsPrime = Prime(inputA);
			if(IsPrime){
				A = true;
			}else{
				inputA++;
				CountA++;
			}
		}
		if(!B){
			IsPrime = Prime(inputB);
			if(IsPrime){
				B = true;
			}else{
				inputB--;
				CountB++;
				if(inputB == 0){
					inputB = inputA+10000;
				}
			}
		
			
		}
		
	}while(!(A&B)); 	
  	
  	if(CountA < CountB){
  		cout<<CountA;
	}else{
		cout<<CountB;
	}
}

