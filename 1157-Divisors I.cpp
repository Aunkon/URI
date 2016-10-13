/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    while(scanf("%d",&n)!=EOF)
    {
        t=(n/2)+1;
        for(i=1;i<=t;i++)
        {
            if(n%i==0)
            {
                printf("%d\n",i);
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
