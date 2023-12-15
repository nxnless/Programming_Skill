#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> num;
    
    int input;
    
    do{
    	cin>>input;
    	if(input == 0){
    		break;
		}else{
			num.push_back(input);
		}
    	
	}while(input != 0);
    
    int tax = 0;
	for(int i = 0 ; i < num.size() ; i++){
		if(num[i] <= 100000){
			tax += 0;
		}
		if(num[i] >100000){
			if(num[i] >= 1000000){
				tax += 900000*0.12;
			}else
				tax += num[i]*0.06;
			}
		}if(num[i] > 1000000){
			if(num[i] >= 5000000){
				tax += 4000000*0.12;
			}else{
				tax += num[i]*0.12;
			}
		}if(num[i] > 5000000){
			if(num[i] >= 10000000){
				tax+=5000000*0.20;
			}else{
				tax += num[i]*0.20;
			}
		}if(num[i]> 10000000){
			tax+= num[i]*32;
		}
		
		cout<<tax<<endl;
	}
    
}
