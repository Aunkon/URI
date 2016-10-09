/***        Md. Walid Bin Khalid Aunkon         ***/
/***        mdwalidbinkhalidaunkon@gmail.com    ***/
/***        Daffodil International University   ***/
/***        Contact No:     01916492926         ***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,h,m;
    while(scanf("%d",&s)!=EOF)
    {
        h=0,m=0;
        if(s>=3600)
        {
            h=s/3600;
            s%=3600;
        }
        if(s>=60)
        {
            m=s/60;
            s%=60;
        }
        printf("%d:%d:%d\n",h,m,s);
    }
    return 0;
}
