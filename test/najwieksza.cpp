/*1. Proszê napisaæ program, który wczytuje wprowadzany z klawiatury ci¹g liczb naturalnych
zakoñczonych zerem stanowi¹cym wy³¹cznie znacznik koñca danych.
Program powinien wypisaæ 10 co do wielkoœci wartoœæ, jaka wyst¹pi³a w ci¹gu.
Na przyk³ad dla ci¹gu: 1,2,3,2,3,4,5,6,7,8,9,9,11,12,13,0 powinna zostaæ wypisana liczba 3.
Mo¿na za³o¿yæ, ¿e w ci¹gu znajduje siê wystarczaj¹ca liczba elementów*/
#include <iostream>
using namespace std;

const int N=100;
void zerowanie(int tab[N]){
    for(int i=0;i<N;i++){
        tab[i]=0;
    }
}

int najwieksza_10(int tab[N]){
    int suma=0;
    for(int i=N-1;i>0;i--){
        if(tab[i]!=0){
            suma++;
        }
        if(suma==10){
            return i;
        }
    }
}

int main(){
    int tab[N];
    zerowanie(tab);
    int a;
    while(a!=0){
        cin>>a;
        tab[a]++;
    }
    cout<<najwieksza_10(tab);
}
