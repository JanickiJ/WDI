#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

    float f(float n){
        return n*n-2019;
    }

int main(){
    float x;
    float a=1;
    float b=2019;
    float e=0.01;

    while(abs(f(a)-f(b)<e)){
        x=(a+b)/2;
        if(abs(f(x))<e){break;}

        if(f(a)*f(x)<0){b=x;}

        else{a=x;}
    }
    cout<<x<<"  "<<x*x<<endl;
}

