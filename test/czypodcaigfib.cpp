#include <iostream>
using namespace std;

const int N=20;
void fib(int tab[N]){
    tab[0]=0;
    tab[1]=1;
    for(int i=2; i<N; i++){
        tab[i]=tab[i-1]+tab[i-2];
    }
}

bool czy_sumafib(int n, int tab[N]){
    for(int i=0;n>=tab[i];i++){
        int suma=tab[i];
        if(suma==n) return true;
        for(int j=i+1; n>tab[j]; j++){
            suma+=tab[j];
            if(suma==n) return true;
        }
    }
    return false;
}

int nastepna(int n){
int tab[N];
fib(tab);
    for(int i=n+1; ;i++){
        if(!czy_sumafib(i,tab)){
            return i;
        }
    }
}

int main(){
cout<<nastepna(0);
}
