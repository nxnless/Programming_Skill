#include <iostream>
using namespace std;

int main(){
    int a[4],score =0;
    for(int i = 0 ; i <4 ; i++){
        cin>>a[i];
        score+=a[i];
    }

    if(score < 50){
        cout<<"F";
    }else if(score <55){
        cout<<"D";
    }else if(score < 60){
        cout<<"D+";
    }else if(score <65){
        cout<<"C";
    }else if(score <70){
        cout<<"C+";
    }else if(score <75){
        cout<<"B";
    }else if(score <80){
        cout<<"B+";
    }else{
        cout<<"A";
    }
}