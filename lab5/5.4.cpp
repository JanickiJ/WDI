#include <iostream>
using namespace std;

struct wymierna{
int l;
int m;
};

wymierna odejmowanie(wymierna w2, wymierna w1){
wymierna w3;
w3.m=w1.l*w2.l;
w3.l=w1.l*w2.m-w2.l*w1.m;

return w3;
}

wymierna dodawanie(wymierna w2, wymierna w1){
wymierna w3;
w3.m=w1.l*w2.l;
w3.l=w1.l*w2.m+w2.l*w1.m;

return w3;
}

wymierna dzielenie(wymierna w2, wymierna w1){
wymiern a23;
w3.l=w1.l*w2.m;
w3.m=w1.m*w2.l;

return w3;
}

wymierna mnozenie(wymierna w2, wymierna w1){
wymierna w3;
w3.l=w1.l*w2.l;
w3.m=w1.m*w2.m;

return w3;
}

int MAX=100;
int ciag(wymierna tab[MAX]){

int LA=0;
int LG=0;

    for(int wyraz1=0;wyraz1<MAX-2;wyraz++){
        for(int wyraz2=wyraz1+1;wyraz2<MAX-1;wyraz1++){
            wymierna r=odejmowanie(tab[wyraz2], tab[wyraz1]);
            wymierna q=dzielenie(tab[wyraz2], tab[wyraz1]);
            for(int wyraz3==wyraz2+1;wyraz3<MAX;wyraz3++){
                if(dodawanie(tab[wyraz3]+r)==tab[wyraz2]){LA++;}
                if(mnozenie(tab[wyraz3]*q)==tab[wyraz2]){LG++;}
            }
        }
    }
    if(LA>LG){return 1;}
    if(LA<LG){return -1;}
    if(LA==LG){return 0;}
}

