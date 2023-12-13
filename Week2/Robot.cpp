#include <iostream>
using namespace std;
int main(){
    int pos[2] = {0,0};
    string input;
    cin>>input;

    for(int i = 0 ; i < input.length() ; i++){
        if(input[i] == 'N')
        {
            pos[0]++;
        }if(input[i] == 'S'){
            pos[0]--;
        }if(input[i] == 'E'){
            pos[1]++;
        }if(input[i] == 'W'){
            pos[1]--;
        }if(input[i] == 'Z'){
            pos[0] = pos[1] = 0;
        }
    }
    cout<<pos[1]<<" "<<pos[0];
}