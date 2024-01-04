#include <iostream>
#include <vector>
using namespace std;

vector <int> visit[100];

bool TL(vector<int> a[] , int y , int x ){
	bool result = false;
	int topLeft,topRight ,top , midLeft , midRight , mid , botLeft,botRight,bot;
	topLeft = a[y-1][x-1];topRight = a[y-1][x+1] ; top = a[y-1][x];
	midLeft = a[y][x-1];midRight = a[y][x+1] ; mid = a[y][x];
	botLeft = a[y+1][x-1] ; botRight = a[y+1][x+1] ; bot = a[y+1][x];
	
	int Vi[] = { topLeft,topRight ,top , midLeft , midRight , mid , botLeft,botRight,bot};
	
	for(int i = 0 ; i < 9 ; i++){
		switch (i){
			case 0:
				if(Vi[i] == 1){
					visit[y-1][x-1] = 1;
					result = true;
				}
				break;
			case 1:
				if(Vi[i] == 1){
					visit[y-1][x+1] = 1;
					result = true;
				}
				break;
			case 2:
				if(Vi[i] == 1){
					visit[y-1][x] = 1;
					result = true;
				}
				break;
			case 3:
				if(Vi[i] == 1){
					visit[y][x-1] = 1;
					result = true;
				}
				break;
			case 4:
				if(Vi[i] == 1){
					visit[y][x+1] = 1;
					result = true;
				}
				break;
			case 5:
				if(Vi[i] == 1){
					visit[y][x] = 1;
					result = true;
				}
				break;
			case 6:
				if(Vi[i] == 1){
					visit[y+1][x-1] = 1;
					result = true;
				}
				break;
			case 7:
				if(Vi[i] == 1){
					visit[y+1][x+1] = 1;
					result = true;
				}
				break;
			case 8:
				if(Vi[i] == 1){
					visit[y+1][x] = 1;
					result = true;
				}
				break;
				
		}
	}
	return result;
}

int main(){
	int x,y;
	cin>>x>>y;
	vector <int> map[x];
	
	int pos , count = 0;
	for(int i = 0 ; i<y ; i++){
		for(int j = 0 ; j <x ; j++){
			cin>>pos;
			map[i].push_back(pos);
			visit[i].push_back(0);
		}
	}
	for(int i = 0 ; i< y ; i++){
		for(int j = 0 ; j<map[i].size() ; j++){
			if(!aroun_isvisit(visit,i,j)){
				count++;
			}	
		}
	}
	cout<<count;
}
