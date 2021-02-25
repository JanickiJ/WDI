/*1. Prosz� napisa� program, kt�ry wczytuje wprowadzany z klawiatury ci�g liczb naturalnych
zako�czonych zerem stanowi�cym wy��cznie znacznik ko�ca danych.
Program powinien wypisa� 10 co do wielko�ci warto��, jaka wyst�pi�a w ci�gu.
Na przyk�ad dla ci�gu: 1,2,3,2,3,4,5,6,7,8,9,9,11,12,13,0 powinna zosta� wypisana liczba 3.
Mo�na za�o�y�, �e w ci�gu znajduje si� wystarczaj�ca liczba element�w*/
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
