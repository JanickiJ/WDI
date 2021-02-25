#include <iostream>
using namespace std;

float pole(int k){
    int w1=1;
    int w2=k;
    float pole=0;
    float pole_prostokata;
    float l_elementow=1000000;
    float bok_a=(k-1)/l_elementow;
        for(int i=0;i<l_elementow;i++){
            float srodek=(1+bok_a/2)+i*bok_a;
            float bok_b=1/(srodek);
            pole_prostokata=bok_a*bok_b;
            pole+=pole_prostokata;
        }
        cout<<pole;
}

int main(){
float k;
cin>>k;
pole(k);
}
