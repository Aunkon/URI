/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,a=0,i=0;
    while(scanf("%lf",&t)&&t>=0)
    {
        a+=t;
        i++;
    }
    printf("%.2lf\n",a/i);
    return 0;
}
