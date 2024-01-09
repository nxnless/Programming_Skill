#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
using namespace std;
int on_the_sky;

bool com_by_last(string a,string b){
	int k =1;
	if(a[on_the_sky] != b[on_the_sky]){
		return a[on_the_sky] < b[on_the_sky];
	}else{
		while(a[on_the_sky-k] == b[on_the_sky-k]){
			k++;
		}	
		return a[on_the_sky-k] < b[on_the_sky-k];
	}
}

bool isOne(char a){
	return a == '1';
}

string tranCommand(string pass , vector<string> Com , int start , int bit){
	int r = 0;
	for(int i = 0 ; i<bit ; i++){
		if(pass[start+i] == '1'){
			r += pow(2,i);
		}
	}
	if(r >=Com.size()){
		return "";
	}else{
		return Com[r];
	}

}

//string tranfrom(string pass , vector<string> Com , int N){
//	string result;
//	int rc = 0 , toBi = 0;
//	for(int i = 0 ; i<pass.length() ; i++){
//		rc = i%N;
//		if(pass[i] == '1'){
//			toBi += pow(2,rc);
//		}
//		
//		if(rc == N-1){
//			result = Com[toBi]+result;
//			toBi = 0;
//		}
//	}
//
//	return result;
//}

int findBit(int Com){
	int a = 0;
	while(true){
		if(pow(2,a) > Com)
			return a;
		a++;
	}
}

int main(){
	int N , cc = 0;
	string M,L;
	cin>>N>>M>>L;
	on_the_sky = N-1;
	string ACom[M.size()/N];
	int ACsize = M.size()/N;
	int j = 0;
	string cut;
	for(int i = 0 ; i < M.size() ; i++){
		
		if(j==N){
			ACom[cc] = cut;
			cut = "";
			j = 0;
			cc++;
		}
			cut = cut+M[i];
			j++;
	}
	ACom[cc] = cut;
	vector <string> Com;
	Com.push_back(ACom[0]);
	bool a;
	for(int i = 0 ; i < ACsize ; i++){
		a = true;
		for(int j = 0 ; j <Com.size() ; j++){
			a = ACom[i] == Com[j];
			if(a){
				a = true;
				break;
			}else{
				a = false;
			}
		}
		if(a){
			continue;
		}else{
			Com.push_back(ACom[i]);
		}
	}
	sort(Com.begin() , Com.end(),com_by_last);
	for(int i = 0 ; i<Com.size() ; i++){
		cout<<Com[i]<<" "<<i<<endl;
	}
	
	int bit = findBit(Com.size());
//	cout<<bit<<endl;
//	cout<<L<<endl;
	reverse(L.begin(),L.end());
	string result = "";
//	cout<<L<<endl;
	
	for(int i = 0 ; i<L.length() ; i+=bit){
		result = tranCommand(L,Com,i,bit) + result;
	}
	cout<<result;
}
