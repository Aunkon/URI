/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,e,o,p,n,i;
    while(scanf("%d",&a)!=EOF)
    {
        e=o=p=n=0;
        if(a%2==0)  e++;
        else        o++;
        if(a>0)     p++;
        else        n++;
        for(i=1;i<5;i++)
        {
            scanf("%d",&a);
            if(a%2==0)  e++;
            else        o++;
            if(a>0)     p++;
            if(a<0)       n++;
        }
        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);
    }
    return 0;
}
