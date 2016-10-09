/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,i,p;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);
        if(a>b)
        {
            p=i;
            b=a;
        }
    }
    printf("%d\n%d\n",b,p);
    return 0;
}
