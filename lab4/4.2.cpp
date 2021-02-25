#include <iostream>
using namespace std;


int const MAX=3;
bool co_najmniej_jedna_nieparzysta(int tab[MAX][MAX]){

    for(int wiersz=0; wiersz<MAX; wiersz++){
        int suma=0;

        for(kolumna=0; kolumna<MAX; kolumna++){
            int n=tab[wiersz][kolumna];

            int s=1;
            if(n==0){
                s=0;
            }                            //fukncja sprawdzajaca czy liczba jest z³o¿ona z cyfr nieparzystych
            while(n!=0){
                int x=n%10;
                if(x%2==0){
                    s=0;
                }
                n/=10;
            }

            suma+=s;
        }
        if(suma==0){
            return false;
        }
    }
    return true;
}

int main(){
int tab[MAX][MAX];
tab[0][0]=3;
tab[0][1]=3;
tab[0][2]=2;
tab[1][0]=2;
tab[1][1]=1;
tab[1][2]=6;
tab[2][0]=1;
tab[2][1]=2;
tab[2][2]=2;

cout<<co_najmniej_jedna_nieparzysta(tab);
}
