#include <iostream>
#include <math.h>
using namespace std;

int main(){
float x=sqrt(0.5);
    for(int i=0;i<100000000;i++){
    x*=sqrt(0.5+0.5*x);
    cout<<x<<"  "<<2/x;
    }

}
