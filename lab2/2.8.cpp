#include <iostream>
using namespace std;

int main(){
int a,b,n;
cout<<"wpisz a, b, n";
cin>>a>>b>>n;
    while(n>0){
        if(a/b>=1){
            a-=b;
        }
        else{
            a*=10;
            cout<<a/b;
            n--;
        }

    }
}
