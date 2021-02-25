#include <iostream>
#include <cmath>
using namespace std;

int i_min;
int x_min;

int najmniejszy(int n){
int x;
int roznica_min=n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            x=n/i;
            int roznica=abs(x-i);
            if(roznica<roznica_min){
            i_min=i;
            x_min=x;
            roznica_min=abs(x-i);
            }
        }
    }
return i_min,x_min;
}

int main(){
int n;
cout<<"wpisz liczbe: ";
cin>>n;
najmniejszy(n);
cout<<i_min<<" "<<x_min;
return 0;
}
