#include <iostream>
#include <string>
using namespace std;


string wynik[20];
void zamiana(int liczba,int s){
string system="0123456789ABCDEF";
int i=0;
    while(liczba!=0){
        int a=liczba%s;
        liczba/=s;
        wynik[i]=system[a];
        i++;
    }
}

int main(){
int liczba;
int s;
cin>>s;
cin>>liczba;
zamiana(liczba,s);
    for(int i=20;i>=0;i--){
    cout<<wynik[i];
    }

}
