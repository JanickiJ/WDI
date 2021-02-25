#include <iostream>
#include <cmath>
using namespace std;

//ax+by+c=0;
//dx+ey+f=0;

struct ulamek{
    int l;
    int m;
};

int euklides(int c, int d){
    int a=abs(c);
    int b=abs(d);
    while (a != b)
    {
        if(a > b){
            a -= b;
        }else
        {
            b -= a;
        }
    }
    return a;
}

ulamek skroc(ulamek u){
    int nwd = euklides(u.l, u.m);
    u.l = u.l/nwd;
    u.m = u.m/nwd;

    return u;
}

void print(ulamek u){
cout<<u.l<<"/"<<u.m<<endl;
}



void rownanie(int a,int b,int c,int d,int e,int f){
int W,Wx,Wy;
//matoda wyznacznikow
W=a*e-d*b;
Wx=(-c)*(e)-(-f)*b;
Wy=a*(-f)-d*(-c);


ulamek x;
x.l=Wx;
x.m=W;
print(skroc(x));

ulamek y;
y.l=Wy;
y.m=W;
print(skroc(y));
}

int main(){
int a,b,c,d,e,f;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
cin>>f;
rownanie(a,b,c,d,e,f);
}
