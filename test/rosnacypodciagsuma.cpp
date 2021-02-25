#include <iostream>
using namespace std;

const int N=9;
bool czy_rosnacy(int tab[N], int p, int k){
    for(int i=p; i<k; i++){
        if(tab[i]>tab[i+1]){
            return false;
        }
    }
    return true;
}

bool czy_suma(int tab[N], int p, int k){
    int sumaele=0;
    int sumaind=0;
    for(int i=p; i<=k; i++){
        sumaele+=tab[i];
        sumaind+=i;
    }
    if(sumaele==sumaind){
        return true;
    }
    return false;
}

int podciag(int tab[N]){
    int maxlen=0;
    bool flaga;
    for(int p=0; p<N-1; p++){
        flaga=true;

        for(int k=p+1; k<N && flaga; k++){

            if(!czy_rosnacy(tab,p,k)){
            flaga=false;
            p=k;
            }

            else{
                if(czy_suma(tab,p,k)){
                    int x=k-p+1;
                    if(maxlen<x){
                        maxlen=x;
                    }
                }
            }
        }
    }
    return maxlen;
}


int main(){
int tab[N]={7,6,2,3,4,5,6,9,11};
cout<<podciag(tab);
}
