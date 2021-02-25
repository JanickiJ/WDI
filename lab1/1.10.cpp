#include <iostream>
#include <math.h>
using namespace std;

bool czy_doskonala(int n){
    int suma=0;
        for(int i=1;i<=(n+1)/2;i++){
            if(n%i==0){
                suma+=i;
            }
        }
    if(suma==n){
        return true;
    }
    else {
        return false;
    }
}

int main(){
int n;
cin>>n;
    for(int i=1;i<=n;i++){
        if(czy_doskonala(i)){
           cout<<i<<endl;
        }
    }
    return 0;
}
