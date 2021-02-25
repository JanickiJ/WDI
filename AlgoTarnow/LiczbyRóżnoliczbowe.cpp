#include <iostream>

using namespace std;


bool czy_roznoliczbowe(int x,int y){
    int tabx[10];
    int taby[10];
    for(int i=0;i<10;i++){
        tabx[i]=0;
        taby[i]=0;
    }

    do{
        int a=x%10;
        tabx[a]++;
        x/=10;

    }while(x!=0);

        do{
        int a=y%10;
        taby[a]++;
        y/=10;

    }while(y!=0);

    for(int i=0;i<10;i++){
        cout<<i<<"  "<<tabx[i]<<"  " <<taby[i]<<endl;
    }

    for(int i=0;i<10;i++){
        if(tabx[i]>0 && taby[i]>0){
            return false;
        }
    }
    return true;
}

int main(){
int x,y;
cin>>x;
cin>>y;
cout<<czy_roznoliczbowe(x,y);
}
