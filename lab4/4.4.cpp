#include <iostream>
using namespace std;

int wyniki[2];
int const MAX=3;

int najwieksza(int sumakolumn[MAX]){
    int c=sumakolumn[0];
    int x=0;
    for(int i=1;i<MAX;i++){
        if(sumakolumn[i]>c){
            c=sumakolumn[i];
            x=i;
        }
    }
    return x;
}

int najmniejsza(int sumawierszy[MAX]){
    int c=sumawierszy[0];
    int y=0;
    for(int i=1;i<MAX;i++){
        if(sumawierszy[i]<c){
            c=sumawierszy[i];
            y=i;
        }
    }
    return y;
}


void najwieksza_sumakolumny_do_sumawiersza(int tab[MAX][MAX]){

    int sumawierszy[MAX];
    int sumakolumn[MAX];
    for(int i=0;i<MAX;i++){
        sumakolumn[i]=0;
        sumawierszy[i]=0;
    }

    for(int wiersz=0; wiersz<MAX; wiersz++){
        for(int kolumna=0; kolumna<MAX; kolumna++){
            sumawierszy[wiersz]+=tab[wiersz][kolumna];
        }
    }

    for(int kolumna=0; kolumna<MAX; kolumna++){
        for(int wiersz=0; wiersz<MAX; wiersz++){
            sumakolumn[kolumna]+=tab[wiersz][kolumna];
        }
    }

    wyniki[1]=najwieksza(sumakolumn);
    wyniki[0]=najmniejsza(sumawierszy);
}

int main(){
int tab[3][3];
tab[0][0]=5;
tab[0][1]=4;
tab[0][2]=3;
tab[1][0]=2;
tab[1][1]=8;
tab[1][2]=1;
tab[2][0]=4;
tab[2][1]=3;
tab[2][2]=10;
najwieksza_sumakolumny_do_sumawiersza(tab);
cout<<wyniki[0]<<" "<<wyniki[1];

}
