#include <iostream>
using namespace std;

int tab[31];
void fib(){
tab[0]=1;
tab[1]=1;
    for(int i=2;i<31;i++){
    tab[i]=tab[i-1]+tab[i-2];
    }
}

bool iloczyn(int n){
    int a,b;
    for(a=1;a<31;a++){
        for(b=1;31>=b;b++)
            if(tab[a]*tab[b]==n){
            return true;
            }
    b=1;
    }
    return false;
}

int main(){
int n;
fib();
cin>>n;
if(iloczyn(n)){
    cout<<"JEST";
}
else cout<<"NIE MA";

return 0;
}
