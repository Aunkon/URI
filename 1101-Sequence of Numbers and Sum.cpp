/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,t;
    while(scanf("%d %d",&m,&n))
    {
        if(m<=0 || n<=0)    break;
        t=0;
        if(m>n)     swap(m,n);
        for(m;m<=n;m++)
        {
            printf("%d ",m);
            t+=m;
        }
        printf("Sum=%d\n",t);
    }
    return 0;
}
