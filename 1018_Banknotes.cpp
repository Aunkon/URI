/***        Md. Walid Bin Khalid Aunkon         ***/
/***        mdwalidbinkhalidaunkon@gmail.com    ***/
/***        Daffodil International University   ***/
/***        Contact No:     01916492926         ***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[7]={100,50,20,10,5,2,1},a,i;
    while(scanf("%d",&a)!=EOF)
    {
        printf("%d\n",a);
        for(i=0;i<7;i++)
        {
            printf("%d nota(s) de R$ %d,00\n",a/n[i],n[i]);
            a%=n[i];
        }
    }
    return 0;
}
