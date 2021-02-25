#include <iostream>
#include <math.h>
using namespace std;

bool czy_pierwsza(int n){

    if(n%2==0){
        return false;}
    if(n%3==0){
        return false;}
    else{
        for(int i=1;i*6-1<=sqrt(n);i++){
            if(n%6*i+1==0){
                return false;}
            if(n%6*i-1==0){
                return false;}
        }
    }

    return true;
}


int main(){

    int n;
    cin>>n;
    cout<<czy_pierwsza(n);
}
