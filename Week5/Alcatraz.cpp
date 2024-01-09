#include <iostream>
using namespace std;
int main(){
	int X,Y,N;
	cin>>X>>Y>>N;
	int input,Climb,count = 0;
	
	for(int i = 0; i < N ; i++){
		cin>>input;
		Climb = 0;
		do{
			Climb+=X;
			count++;
			if(Climb>=input){
				break;
			}else{
				Climb-=Y;
			}
		}while(Climb<=input);
		
	}
	cout<<count;
}
