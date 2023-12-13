#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> mon;
    int input,count = 0;
    bool JINGMAI =true;
    int result , income;
    while(JINGMAI){
        cin>>input;
        if(input == 0){
            JINGMAI = false;
        }else{
            mon.push_back(input);
            count++;
        }
    }
    for(int i = 0 ; i < count ; i++){

    }
    
    
}
