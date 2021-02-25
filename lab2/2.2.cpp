#include <iostream>
using namespace std;

//3 7 13 21

bool wielokrotnosc(int n){
int a;
    for(int i=1;i*i+i+1<=n/2;i++){
       a=i*i+i+1;
       if(n%a==0){
        return true;
       }
    }
    return false;
}

int main(){
int n;
cout<<"Wpisz liczbe: ";
cin>>n;
    if(wielokrotnosc(n)){
        cout<<"JEST";
    }
    else{
        cout<<"NIE";
    }
}
