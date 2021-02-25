#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

const int MAX=3;

bool czy_pierwsza(int n){
    if(n==2){return true;}
    if(n==1){return false;}
    if(n==3){return true;}

    if(n%2==0){return false;}
    if(n%3==0){return false;}

    for(int k=1;(6*k+1)<=sqrt(n);k++){
        if(n%(6*k-1)==0){return false;}
        if(n%(6*k+1)==0){return false;}
    }
    return true;
}

bool czy_w_kazdym_wierszu_pierwsza(int tab[MAX][MAX]){
    bool war=true;
    for(int wiersz=0;wiersz<MAX && war; wiersz++){
        war=false;
        for(int kolumna=0; kolumna<MAX && !war; kolumna++){
            war=czy_pierwsza(tab[wiersz][kolumna]);
        }
    }
    return war;
}

int main(){
    int t[3][3] = {{5,25,20},{10,7,10},{7,12,8}};
    cout<<czy_w_kazdym_wierszu_pierwsza(t);
}
