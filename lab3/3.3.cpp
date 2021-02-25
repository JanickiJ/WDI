#include <iostream>
#include <cmath>
using namespace std;
//SITO ERASTOTENESA

int tab[1000000];
void pierwsze(int n){
    for(int i=1;i<=n;i++){
        tab[i]=i;
    }

    for(int i=2;i<=sqrt(n);i++){
            if(tab[i]!=0){
                for(int j=2;j<=n/2;j++){
                    tab[tab[i]*j]=0;
                }
            }
    }
}

int main(){
int n;
cin>>n;
pierwsze(n);
    for(int i=2;i<100000;i++){
        if(tab[i]!=0){
            cout<<tab[i]<<endl;
        }
    }
}
