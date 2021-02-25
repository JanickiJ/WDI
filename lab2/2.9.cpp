#include <iostream>
using namespace std;

bool podciag(int n){

    for(int j=1;j<n;j++){
        int wynik=0;
        int a=0;
        int b=1;
        int c;
        int pocz=j;
        for(int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            if(i>=pocz){
                wynik+=c;}
            if(wynik==n){
                return true;}
                }
        }

    return false;
}

int main(){
int n;
cin>>n;
    for(int i=n+1;i>n;i++){
        if(podciag(i)==false){
            cout<<i;
            break;
        }
    }
}
