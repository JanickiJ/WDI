#include <iostream>
using namespace std;

const int MAX=10;
int binarySearch(int x,int tab[MAX],int p=0, int k=MAX-1){
    if(k<p) return -1;
    int s=(p+k)/2;
    if(tab[s]==x)
        return s;
    if(tab[s]>x)
        return binarySearch(x, tab, p, s-1);
    else
        return binarySearch(x, tab, s+1, k);
}

int sum(int tab[MAX],int n=MAX,suma=0){
    if(n==0) return suma;
    return sum(tab,n-1,suma + tab[n])
}

void zamiana(int x, int s){
string syst="0123456789ABCDEF";
if(x==0) return;
zamiana(x/s, s);
int a=x%s;
cout<<syst[a];
}

void reversetab(int tab[MAX],int p=0, int k=MAX-1){
if(p<=k) return;
int c;
tab[p]=c;
tab[p]=tab[k];
tab[k]=c;
reservetab(tab[MAX],p+1,k-1);

}
