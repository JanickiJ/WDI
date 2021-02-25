#include <iostream>
using namespace std;

int const N=16;

void zamiana(int podstawa ,int liczba,int trans[N]){
    do {
        int a=liczba%podstawa;
        trans[a]++;
        liczba/=podstawa;
    }while(liczba!=0);
}

void zerowanie(int tab[N]){
    for(int i=0; i<N; i++){
    tab[i]=0;
    }
}

bool roznoliczbowe(int tab1[N], int tab2[N]){
    for(int i=0; i<=16; i++){
    if(tab1[i]>0 && tab2[i]>0)
    return false;
    }
    return true;
}

int najmniejsza_podstawa(int liczba1, int liczba2){
    int trans1[N];
    int trans2[N];
    zerowanie(trans1);
    zerowanie(trans2);
    bool flaga=false;
    int x;
    for(int i=2;i<=16 && !flaga;i++){
        zamiana(i, liczba1, trans1);
        zamiana(i, liczba2, trans2);
        flaga=roznoliczbowe(trans1, trans2);
        x=i;
        zerowanie(trans1);
        zerowanie(trans2);
        }

    if(!flaga) return 0;
    else if(flaga)  return x;
}

int main(){
cout<<najmniejsza_podstawa(11, 32);
}
