/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n%2!=0)  n--;
        for(i=2;i<=n;i+=2)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}
