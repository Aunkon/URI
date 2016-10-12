/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    while(scanf("%d",&x)&&x!=0)
    {
        for(i=1;i<=x;i++)
        {
            if(i==x)    printf("%d\n",i);
            else        printf("%d ",i);
        }
    }
    return 0;
}
