#include <iostream>
using namespace std;

int czynniki(int n) {
    int licznik=1;
    for( int i=2;i<=n;i++){
        int x=i;
        while(i%2==0){
            i/=2;
        }
        while(i%3==0){
            i/=3;
        }
        while(i%5==0){
            i/=5;
        }
        if(i==1){
            licznik++;
        }
        i=x;
    }
    return licznik;
}

int main(){
cout << "dej liczbe ";
int n;
cin >> n;
cout<<czynniki(n);
return 0;
}
