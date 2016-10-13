/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
#define maxi 10000001

int primeSet[maxi],x,t;

int prime()
{
    memset(primeSet,0,maxi-1);

    for(t=2;t<maxi;t++)
    {
        if(primeSet[t]==0)
        {
            for(x=t*2;x<maxi;x+=t)
            {
                primeSet[x]=1;
            }
        }
    }
    return 0;
}

int main()
{
    prime();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(primeSet[x]==0)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}
