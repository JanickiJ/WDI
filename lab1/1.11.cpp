#include <iostream>
using namespace std;

int main(){
    int dlugosc=1000000;
    for(int i=1;i<=dlugosc;i++){
        int suma=0;
        int suma1=0;
        for(int j=1;j<=(i+1)/2;j++){
            if(i%j==0){
                suma+=j;
            }
        }
        for(int j=1;j<=(suma+1)/2;j++){
            if(suma%j==0){
                suma1+=j;
            }
        }
        if(suma1==i && suma>i){
            cout<<i<<" "<<suma<<endl;
        }
    }

}
