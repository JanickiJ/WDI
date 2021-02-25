#include <iostream>
using namespace std;

int wynikiPOS[2];
int wynikiNEG[2];
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
        if(sumawierszy[i]>0){
            if(sumawierszy[i]<c){
                c=sumawierszy[i];
                y=i;
            }
        }
        return y;
    }
}

int najmniejszaNEG(int sumakolumn[MAX]){
    int c=sumakolumn[0];
    int x=0;
    for(int i=1;i<MAX;i++){
        if(sumakolumn[i]<0){
            if(sumakolumn[i]<c){
                c=sumakolumn[i];
                x=i;
            }
        }
    }
    return x;
}

int najwiekszaNEG(int sumawierszy[MAX]){
    int c=-1000000;
    int y=0;
    for(int i=1;i<MAX;i++){
        if(sumawierszy[i]<0){
            if(sumawierszy[i]>c){
                c=sumawierszy[i];
                y=i;
            }
        }
        return y;
    }
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

    wynikiPOS[0]=najmniejsza(sumawierszy);
    wynikiPOS[1]=najwieksza(sumakolumn);

    wynikiNEG[0]=najwiekszaNEG(sumawierszy);
    wynikiNEG[1]=najmniejszaNEG(sumakolumn);

    float a=sumakolumn[wynikiPOS[1]];
    float b=sumawierszy[wynikiPOS[0]];
    float c=sumakolumn[wynikiNEG[1]];
    float d=sumawierszy[wynikiNEG[0]];
    cout<<a<<"  "<<b<<" " <<c<<" "<<d<<" "<<a/b<<"  "<<c/d<<endl;
        if(a/b>c/d){
        wyniki[0]=wynikiPOS[0];
        wyniki[1]=wynikiPOS[1];
    }
    else{
        wyniki[0]=wynikiNEG[0];
        wyniki[1]=wynikiNEG[1];
    }

}

int main(){
int tab[3][3];
tab[0][0]=4;
tab[0][1]=8;
tab[0][2]=-1;
tab[1][0]=3;
tab[1][1]=-10;
tab[1][2]=-3;
tab[2][0]=-3;
tab[2][1]=-8;
tab[2][2]=-7;
najwieksza_sumakolumny_do_sumawiersza(tab);
cout<<wyniki[0]<<"  "<<wyniki[1];

}
