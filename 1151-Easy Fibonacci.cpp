/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f[46]={0,1},i;
    for(i=2;i<46;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            if(i==n-1)  printf("%d\n",f[i]);
            else        printf("%d ",f[i]);
        }
    }
    return 0;
}
