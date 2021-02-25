/*2. Dane s¹ dwie tablice mog¹ce pomieœciæ tak¹ sam¹ liczbê elementów:
 int t1[N][N];
 int t2[M]; // M = N*N
W ka¿dym wierszu tablicy t1 znajduj¹ siê uporz¹dkowane niemalej¹co
(w obrêbie wiersza) liczby naturalne. Proszê napisaæ fragment programu
przepisuj¹cy wszystkie liczby z tablicy t1 do t2, tak aby
liczby w tablicy t2 by³y uporz¹dkowane niemalej¹co.
*/
#include <iostream>
using namespace std;

const int N=3;

int najmniejsza(int tab[N][N],int miejsce[N]){
    int MIN=0;
    int nr_wiersza;
    for(int i=0;i<N;i++){
        if(MIN>tab[i][miejsce[i]]){
            MIN=tab[i][miejsce[i]];
            nr_wiersza=i;
        }
    }
    return nr_wiersza;
}

int zerowanie(int tab[N]){
    for(int i=0;i<N*N;i++){
        tab[i]=0;
    }
}

void przepisujaca(int tab[N][N],int wyniki[N*N]){
    int licznik=0;
    int miejsce[N];
    zerowanie(miejsce);

    while(licznik!=N*N){
    int nr_wiersza=najmniejsza(tab,miejsce);
    wyniki[licznik]=tab[nr_wiersza][miejsce[nr_wiersza]];
    licznik++;
    miejsce[nr_wiersza]++;
    //tutaj mam taki problem ze wychodzi mi poza tablice.
    // Musze dodac waruek ¿e miejsce[nr wiersza] musi byæ <=N.
    }
}

int main(){
int tab[N][N]={{1,4,7}, {2,5,8}, {3,5,9}};
int wyniki[N*N];
przepisujaca(tab,wyniki);
for(int i=0;i<N*N;i++){
    cout<<wyniki[i];
}
}

