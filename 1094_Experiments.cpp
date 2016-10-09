/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,r=0,s=0,t;
    char a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&t,&a);
        if(a=='C')      c+=t;
        else if(a=='R') r+=t;
        else            s+=t;
    }
    t=c+r+s;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",t,c,r,s,(double) c*100/t,(double) r*100/t,(double) s*100/t);
    return 0;
}
