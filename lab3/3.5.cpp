#include <iostream>
using namespace std;
int tabe[1100];
int tabt[1100];
int main ()
{
    int n;
    cin >> n;
    tabe[0]=1;
    tabt[0]=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<1100-1; j++)
        {
            tabt[j+1]+=(tabt[j]%i)*10;
            tabt[j]/=i;
        }
        tabt[1100-1]%=10;
        for (int j=0; j<1100; j++)
        {
            tabe[j]+=tabt[j];
        }
        for (int j=1100-1; j>=1; j--)
        {
            tabe[j-1]+=tabe[j]/10;
            tabe[j]%=10;
        }
    }
    cout << tabe[0] << ",";
    for (int i=1; i<1000; i++)
    {
        cout << tabe[i];
    }
    return 0;
}
