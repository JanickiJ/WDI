#include <iostream>
#include <math.h>
using namespace std;

int main(){
int a;
int p=a;
int tab[100];
int i=0;
cin>>a;

    while(a%2==0){
        a/=2;
        tab[i]=2;
        i++;
        cout<<"2"<<endl;
    }

    while(a%3==0){
        tab[i]=3;
        i++;
        a/=3;
        cout<<"3"<<endl;
    }
    for(int k=1;(6*k-1)<=sqrt(p);k++){
        while(a%(6*k+1)==0){
            a/=(6*k+1);
            cout<<6*k+1<<endl;
            tab[i]=6*k+1;
            i++;
        }
                while(a%(6*k-1)==0){
            a/=(6*k-1);
            cout<<6*k-1<<endl;
            tab[i]=6*k-1;
            i++;
        }
    }

    for(int j=0;j<i+1;j++){
     cout<<tab[j]<<endl;
    }
}
