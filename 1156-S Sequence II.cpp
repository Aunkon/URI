/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a=1,i=2,j=1;
    for(i=2;i<39;i+=2)
    {
        a+=(1+i)/(j*=2);
    }
    printf("%.2lf\n",a);
    return 0;
}
