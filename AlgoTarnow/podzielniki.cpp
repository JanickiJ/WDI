#include <iostream>
#include <cmath>
using namespace std;

/*int main(){
int a,b,n;
cin>>a;
cin>>b;
cin>>n;



if(a>b){int c=a; a=b; b=c;}

int podzielniki[n];
    for(int i=0;i<n;i++){
        cin>>podzielniki[i];
    }

int tab[b+1];
    for(int i=0;i<=b;i++){
        tab[i]=i;
    }

    for(int i=0;i<n;i++){
        for(int j=1;j*podzielniki[i]<=b;j++){
        tab[podzielniki[i]*j]=0;
        }
    }

    for(int i=a;i<=b;i++){
        if(tab[i]!=0){
            cout<<tab[i]<<" ";
        }
    }
}
*/
//Sposob nie dzia³aj¹cy na elementach ujemych

int main(){
    int a,b,n;
    cin>>a;
    cin>>b;
    cin>>n;


    if((a<0 && b<0 && a>b)||(a>0 && b>0 && b<a)||(a>0 && b<0)){
        int c=a; a=b; b=c;
    }

    int podzielniki[n];
    for(int i=0;i<n;i++){
        cin>>podzielniki[i];
    }
    int dlugosc=abs(a-b)+1;
    int tab[dlugosc];
    for(int i=0;a<=b;i++){
        tab[i]=a;
        a++;
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<(dlugosc);j++){
            if(tab[j]%podzielniki[i]==0){
                tab[j]=0;
            }
        }
    }
    for(int j=0;j<(dlugosc);j++){
        if(tab[j]!=0){
            cout<<tab[j]<<"  ";
        }
    }
}
