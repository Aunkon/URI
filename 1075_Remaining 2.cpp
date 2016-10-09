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
        printf("2\n",n+2);
        for(i=n;i<10000;i+=n)
        {
            if((i+2)<10000)
            printf("%d\n",i+2);
        }
    }
    return 0;
}
