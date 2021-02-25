
#include <iostream>
using namespace std;

int szukana(int x){
int suma=0;
int i=1;
int licznik=0;

while(suma<=x){
    licznik++;
    if(suma==x){
        return licznik;
    }
    suma+=i;
    i+=2;
}
return licznik-1;
    }




int main(){
cout<<"wprowadz liczbe";
int n;
cin>>n;
cout<<szukana(n);

}
