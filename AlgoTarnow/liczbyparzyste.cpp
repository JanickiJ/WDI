#include <iostream>
using namespace std;


int main(){
int a,b,c;
cin>>a;
cin>>b;
    if(a>b){
        if(b%2==0)  c=b;
        else        c=b+1;
        for(int i=0;c+i-1<a;i+=2){
            cout<<c+i<<" ";
        }

    }

    if(a<b){
        if(a%2==0)  c=a;
        else        c=a+1;
        for(int i=0;c+i-1<b;i+=2){
            cout<<c+i<<" ";
        }
    }

}
