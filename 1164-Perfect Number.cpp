/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,i,d;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        d=1+n/2;
        for(i=1;i<d;i++)
        {
            if(n%i==0)
            {
                c+=i;
            }
        }
        if(c==n)    printf("%d eh perfeito\n",n);
        else        printf("%d nao eh perfeito\n",n);
    }
    return 0;
}
