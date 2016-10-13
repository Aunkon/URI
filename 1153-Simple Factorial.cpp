/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f[13],i;
    f[0]=1;
    for(i=1;i<13;i++)
    {
        f[i]=f[i-1]*i;
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f[n]);
    }
    return 0;
}
