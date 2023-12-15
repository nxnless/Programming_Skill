#include <iostream>
#include <vector>
using namespace std;


int find_tax(int num){
	int tax = 0;
	if(num <= 100000){
			tax += 0;
		}
		if(num >100000){
			if(num >= 1000000){
				tax += 900000*0.06;
			}else{
				tax += (num-100000)*0.06;
			}
		}if(num > 1000000){
			if(num >= 5000000){
				tax += 4000000*0.12;
			}else{
				tax += (num-1000000)*0.12;
			}
		}if(num > 5000000){
			if(num >= 10000000){
				tax += 5000000*0.20;
			}else{
				tax += (num-5000000)*0.20;
			}
		}if (num> 10000000){
			tax+= (num-10000000)*0.32;
		}
		return tax;
}
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
    
    int tax;
     int n = num.size();
	for(int i = 0; i < n ; i++){
		tax = 0;
		tax = find_tax(num[i]);
		cout<<tax<<endl;
	}
    
}
