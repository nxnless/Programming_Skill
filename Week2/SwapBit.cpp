#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int input;
	cin>>input;
	int kit =1;
	int kat;
	kit = input;
	string bi = "";
	while(kit != 0 ){
		kat = kit%2;
		kit = kit/2;
		if(kat == 0){
			bi += '0';
		}if(kat == 1){
			bi += '1';
		}
	}
	while(!(bi.length()%4 == 0)){
		bi += '0';
	}
	char tmp;
	for(int i = 1 ; i< bi.length() ; i+=2){
	
		tmp = bi[i-1];
		bi[i-1] = bi[i];
		bi[i] = tmp;
	}
	
	int result = 0;
	for(int i = 0 ; i<bi.length() ; i++){
		if(bi[i] == '1'){
			result += pow(2,i);
		}
	}
	cout<<result;
}
