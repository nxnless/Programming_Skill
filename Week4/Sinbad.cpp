#include <iostream>
#include <vector>
using namespace std;

vector <int> visit[100];

bool TL(vector<int> a[] , int y , int x ){
	if(a[y-1][x-1] == 1 && visit[y-1][x-1] == 0){
		visit[y-1][x-1] = 1;
		return false;
	}
	return true;
}

bool TR(vector<int> a[] , int y , int x ){
	if(a[y-1][x+1] == 1 && visit[y-1][x+1] == 0){
		visit[y-1][x+1] = 1;
		return false;
	}
	return true;
}

bool TM(vector<int> a[] , int y , int x ){
	if(a[y-1][x] == 1 && visit[y-1][x] == 0){
		visit[y-1][x] = 1;
		return false;
	}
	return true;
}

bool ML(vector<int> a[] , int y , int x ){
	if(a[y][x-1] == 1 && visit[y][x-1] == 0){
		visit[y][x-1] = 1;
		return false;
	}
	return true;
}

bool MR(vector<int> a[] , int y , int x ){
	if(a[y][x+1] == 1 && visit[y][x+1] == 0){
		visit[y][x+1] = 1;
		return false;
	}
	return true;
}

bool MM(vector<int> a[] , int y , int x ){
	if(a[y][x] == 1 && visit[y][x] == 0){
		visit[y][x] = 1;
		return false;
	}
	return true;
}

bool BL(vector<int> a[] , int y , int x ){
	if(a[y+1][x-1]  == 1 && visit[y+1][x-1] == 0){
		visit[y+1][x-1] = 1;
	return false;
	}
	return true;
}

bool BR(vector<int> a[] , int y , int x ){
	if(a[y+1][x+1]  == 1 && visit[y+1][x+1] == 0){
		visit[y+1][x+1] = 1;
		return false;
	}
	return true;
}

bool BM(vector<int> a[] , int y , int x ){
	if(a[y+1][x]  == 1 && visit[y+1][x] == 0){
		visit[y+1][x] = 1;
	return false;
	}
	return true;
}

bool visitAround(vector<int> a[] , int y , int x){
	
	return TL( a ,  y ,  x) &&
	TR( a ,  y ,  x) &&
	TM( a ,  y ,  x) &&
	ML( a ,  y ,  x) &&
	MR( a ,  y ,  x) &&
	MM( a ,  y ,  x) &&
	BL( a ,  y ,  x) &&
	BR( a ,  y ,  x) &&
	BM( a ,  y ,  x);
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
	
	for(int i = 1 ; i< y-1 ; i++){
		for(int j = 1 ; j<map[i].size()-1 ; j++){
			if(!visitAround(map,i,j)){
				
			}	
		}
	}
	cout<<count;
	
		
}
