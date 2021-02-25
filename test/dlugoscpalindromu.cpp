#include <iostream>
using namespace std;

bool czy_palindrom_nieparzysty(int p, int k, int tab[N]){

    for(int i=p; i<=1+(k-p)/2; i++){
        if(tab[i]!=tab[k-i] || tab[i]%2==0 || tab[k-i]%2==0){
            return false;
        }

    }
    return true;
}

int najdluzszy(int tab[N]){
int maxlen=0;
    for(int i=0;i<N-1;i++){

        for(int j=i+1;i<N;j++){
            if(czy_palindrom_nieparzysty(i,j,tab)){
                int x=i-j+1;
                if(x>maxlen){
                    maxlen=x;
                }
            }
        }
    }
    return maxlen;
}
