/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,b;
    while(scanf("%d",&n)!=EOF)
    {
        a=b=0;
        while(n--)
        {
            scanf("%d",&x);
            if(x>=10 && x<=20)  a++;
            else                b++;
        }
        printf("%d in\n%d out\n",a,b);
    }
    return 0;
}
