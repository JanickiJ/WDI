#include <iostream>
using namespace std;

int silnia(int n){
long long a=1;
    for(int i=1;i<=n;i++){
    a*=i;
    while(a%10==0){
        a/=10;
    }
    a=a%10;


    }
return a;
}

int main(){
int n;
cin>>n;
cout<<silnia(n);
}
