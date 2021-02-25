#include <iostream>
using namespace std;

int algorytm_euklidesa(int a, int b){
    while(a!=b){
    if(a>b){a-=b;}
    else   {b-=a;}
    }
    return a;
}
int main(){
int a,b,c;
cin>>a>>b>>c;
int NWD1=algorytm_euklidesa(a,b);
int NWD2=algorytm_euklidesa(NWD1,c);
cout<<NWD1;
}
