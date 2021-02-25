#include <iostream>
using namespace std;

bool podciag(int n){
    int tab[n];

    tab[0]=0;
    tab[1]=1;
    for(int i=2;i<n;i++){
        tab[i]=tab[i-1]+tab[i-2];
    }

    for(int i=0;i<n;i++){

        if(tab[i]==n){
            return true;
        }
        int suma=tab[i];

        for(int j=i+1;suma<n;j++){
            suma+=tab[j];
            if(suma==n){
                return true;
            }
        }
    }

    return false;
}

int main(){
int n;
cin>>n;
cout<<podciag(n);
}
