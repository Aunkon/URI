/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    while(scanf("%d",&a)!=EOF)
    {
        if(a%2==0)  a++;
        for(i=0;i<6;i++)
        {
            printf("%d\n",a);
            a+=2;
        }
    }
    return 0;
}
