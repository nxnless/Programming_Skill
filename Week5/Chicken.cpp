#include <iostream>
using namespace std;

int main(){
	int day;
	cin>>day;
	int birth[day] , total[day];
	birth[0] = 1;
	total[0] = 1;
	for(int i = 1 ; i < day ; i++){
		if(i>=6){
			birth[i] = (total[i-1] - birth[i-6])*2 ;
			total[i] = birth[i]+ total[i-1];
		}else{
			birth[i] = total[i-1]*2;
			total[i] = birth[i]+ total[i-1];
		}
	}
	int result = 0;
	for(int i = 0 ; i < day ; i++){
		//result += total[i];
	}
	cout<<total[day-1];
}
