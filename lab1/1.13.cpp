#include <iostream>
using namespace std;

int algorytm_euklidesa(int a, int b){
    while(a!=b){
    if(a>b){a-=b;}
    else   {b-=a;}
    }
    return a;
}

int najwiekszaWW(int a,int b,int NWD){
    return a*b/NWD;
}

int main(){
int a,b,c;
cin>>a>>b>>c;

int NWD1=algorytm_euklidesa(a,b);
int NWW1=najwiekszaWW(a,b,NWD1);
int NWD2=algorytm_euklidesa(NWW1,c);
int NWW2=najwiekszaWW(NWW1,c,NWD2);

cout<<NWW1<<endl<<NWW2;
}
