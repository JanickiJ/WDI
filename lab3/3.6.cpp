#include <iostream>
using namespace std;


int tab[100];
int main(){
int tab2[10]={1,1,1,1,1,1,1,1,1,1};
    for(int i=0;i<101;i++){
        cin>>tab[i];
        if(tab[i]==0){
            break;
        }
    }

    for(int i=0;i<10;i++){
    int a;
        for(int j=0;j<100;j++){
            if(tab2[i]<tab[j]){
            tab2[i]=tab[j];
            a=j;
            }
        }
    tab[a]=0;
    }
cout<<tab2[9];
}
