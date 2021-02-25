#include <iostream>
using namespace std;

int tab[3000];
void silnia(int n){
    tab[2999]=1;
    for(int i=2;i<=n;i++){
        int a=0;
        for(int j=2999;j>=0;j--){
            tab[j]=tab[j]*i+a;
            a=0;
            if(tab[j]>=10){
                a=tab[j]/10;
                tab[j]%=10;
            }
        }
    }
}


int main(){
int n;
cin>>n;
silnia(n);
    for(int i=0;i<=2999;i++){
    cout<<tab[i];
    }
}
