#include <iostream>
using namespace std;

int hh(int a, int b){
	b = b+5;
	return a+b;
}

int main(){
	int a = 2 , b = 3;
	a = hh(a,b);
	
	cout<<a<<b;
}
