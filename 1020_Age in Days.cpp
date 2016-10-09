/***        Md. Walid Bin Khalid Aunkon         ***/
/***        mdwalidbinkhalidaunkon@gmail.com    ***/
/***        Daffodil International University   ***/
/***        Contact No:     01916492926         ***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,y,m;
    while(scanf("%d",&d)!=EOF)
    {
        y=m=0;
        if(d>=365)
        {
            y=d/365;
            d%=365;
        }
        if(d>=30)
        {
            m=d/30;
            d%=30;
        }
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    }
    return 0;
}
