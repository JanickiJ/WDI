#include <iostream>
using namespace std;

int NWD(int a, int b){
    while(a!=b){
    if(a>b) a-=b;
    else    b-=a;
    }
    return a;
}

int NWW(int a, int b){
    return a*b/NWD(a,b);
}

struct ulamek{
    int l,m;
};

ulamek skroc(ulamek x){
int nwd=NWD(x.l, x.m)
x.l/=nwd;
x.m/=nwd;
return x;
}

ulamek dodaj(ulamek u1, ulamek u2){
ulamek wynik;
u1.l*=u2.m;
u2.l*=u1.m;

wynik.l=u1.l + u2.l;
wynik.m=u1.m * u2.m;

return skroc(wynik);
}

ulamek odejmowanie(ulamek u1, ulamek u2){
ulamek wynik;

u1.l*=u2.m;
u2.l*=u1.m;

wynik.l=u1.l-u2.l;
wynik.m=u1.m*u2.m;

return skroc(wynik)
}

ulamek mnozenie(ulamek u1, ulamek u2){
ulamek wynik;

wynik.l=u1.l * u2.l;
wynik.m=u1.m * u2.m;

return skroc(wynik);
}

ulamek dzielenie(ulamek u1, ulamek u2){
ulamek wynik;

wynik.l=u1.l*u2.m;
wynik.m=u1.m*u2.l;

return skroc(wynik);
}

ulamek read(int m;, int m){
ulamek u;
u.l=l;
u.m=m;

return u;
}

void print(ulamek u){
    cout<<u.l<<'/'<<u.m; //co tutaj ???
}

