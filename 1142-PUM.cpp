/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,p,i;
    while(scanf("%d",&l)!=EOF)
    {
        p=1;
        for(i=1;i<=l;i++)
        {
            printf("%d ",p++);
            printf("%d ",p++);
            printf("%d PUM\n",p++);
            p++;
        }
    }
    return 0;
}
