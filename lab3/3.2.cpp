#include <iostream>
#include <string>
using namespace std;

int taba[100];
int tabb[100];
bool takie_same(string n,string m){

    for(int i=0;i<=9;i++){
        for(int j=0;j<n.length();j++){
            if(n[j]==i+48){
                taba[i]++;
            }
        }
    }

    for(int i=0;i<=9;i++){
        for(int j=0;j<m.length();j++){
            if(m[j]==i+48){
                tabb[i]++;
            }
        }
    }

    for(int i=0;i<=9;i++){
        if(taba[i]!=tabb[i]){
           return false;}
        }
return true;

}



int main(){
string m,n;
cin>>n;
cin>>m;
cout<<takie_same(n,m);
}
