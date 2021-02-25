#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int dl;
int tab[1000000];
bool palindrom(int n){

int j,i;
    for(i=0;n>0;i++){
        tab[i]=(n%10);
        n=(n-n%10)/10;
        j=i;
    }
    for(int a=0;a<=(j-a);a++)
    {

        if(tab[a]!=tab[j-a])
        {
        return false;
        }
    }
return true;
}


int dwojkowy(int n){
int i=0;
    while(n!=0){
        tab[i]=n%2;
        i++;
        n=n/2;
        dl =i-1;
    }
}

bool palindrom_bin()
{
    int j,a;
    j = dl;
    for(int a=0 ;a<=(j-a); a++)
    {
        if(tab[a]!=tab[j-a])
        {
        return false;
        }
    }
return true;

}


int main(){
int n;
cout<<"Podaj liczbe: ";
cin>>n;
if(palindrom(n)) cout<<"1";
else cout<<"0"<<endl<<endl;
cout << "W systemie dwojkowym:" << endl;
dwojkowy(n);
cout << palindrom_bin() << endl;

}
