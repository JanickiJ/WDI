#include <iostream>
using namespace std;

const int MAX=3;
bool czy_parzysta(int x){

    do{
        int a=x%10;
        if(a%2==0){
            return true;
        }
        x/=10;
    }while(x!=0);

    return false;
}


bool z_nieparzystych(int tab[MAX][MAX]){
    bool istnieje=false;
    for(int i=0;i<MAX && !istnieje; i++){
        istnieje=true;
        for(int j=0;j<MAX && istnieje; j++){
            istnieje=czy_parzysta(tab[i][j]);
        }
    }
return istnieje;
}


int main(){
    cout<<"0: "<<czy_parzysta(0)<<endl;
    cout<<"1: "<<czy_parzysta(1)<<endl;
    cout<<"13: "<<czy_parzysta(13)<<endl;
    cout<<"14: "<<czy_parzysta(14)<<endl;
    cout<<"35798: "<<czy_parzysta(35798)<<endl;
    cout<<"3579: "<<czy_parzysta(3579)<<endl;
    int t[3][3] = {{2,2,2},{0,1,0},{4,1,4}};
    cout<<"555"<<z_nieparzystych(t)<<endl;
    int t2[3][3] = {{2,5,2},{1,1,1},{4,1,4}};
    cout<<z_nieparzystych(t2)<<endl;
}
