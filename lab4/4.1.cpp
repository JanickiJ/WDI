#include <iostream> //<bits/stdc++.h>
using namespace std;

const int MAX=9; //CONST????

void spirala(int tab[MAX][MAX]){
    int x=MAX/2;
    int y=MAX/2;
    int i=1;
    int len=1;
    int m=0;
    int dir=2;
    while(i<MAX*MAX){

        for(int n=0;n<len;n++){
            tab[x][y]=i++;

            if(dir%4==0){
            y++;
            }
            else if(dir%4==1){
            x++;
            }
            else if(dir%4==2){
            y--;
            }
            else {
            x--;
            }
        }
        dir++;

    m++;
    if(m%2==0){
        len++;
    }

    }
}

int main(){
int tab[MAX][MAX];
    spirala(tab);
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
        cout<<tab[j][i]<<" ";
        }
        cout<<endl;
    }


}
