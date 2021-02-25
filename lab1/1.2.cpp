#include <iostream>
using namespace std;
int main(){
	int mins=1000000;
	int minj=0;
	int mini=0;
	for(int i=1;i<2019;i++){
		for(int j=1;j<2019;j++){
			int a=i;
			int b=j;
			int c=0;
			while(a<2020){
				c=a+b;
				if(c==2019){
					if(i+j<mins){
						mins=i+j;
						mini=i;
						minj=j;
					}
				}
				a=b;
				b=c;
			}
		}
	}
	cout<<mini<<" "<<minj<<endl;
}
