#include <iostream>
using namespace std;

//Chcia³em opisac globalnie tab i wtedy main i void móg³by z niego korzystaæ
//ale jest tab[n] a n dopiero w mainie sie wpisuje i nie dzia³a

void sito_liniowe(int n){
    bool tab[n];
    for(int i=0;i<=n;i++){
        tab[i]=true;
    }

    for(int p=2;p*p<=n;p++){
        for(int q=p;p*q<=n;q++){
            int x=p*q;
            for(int k=1;x<=n;k++){
            tab[x]=false;
            x=x*p;
            }
        }
    }
}

int main(){
int n;
cin>>n;

    bool tab[n];
    for(int i=0;i<=n;i++){
        tab[i]=true;
    }

    for(int p=2;p*p<=n;p++){
        while(tab[p]=false){
            p++;
        }
        for(int q=p;p*q<=n;q++){
            int x=p*q;
            for(int k=1;x<=n;k++){
            tab[x]=false;
            x=x*p;
            }
        }
    }

    for(int i=3;i<=n;i++){
        if(tab[i]==true){
        cout<<i<<endl;
        }
    }
}
