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
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",i,n,i*n);
        }
    }
    return 0;
}
