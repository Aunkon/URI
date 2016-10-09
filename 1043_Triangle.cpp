/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,t;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        t=0;
        if(t<a) t=a;
        if(t<b) t=b;
        if(t<c) t=c;
        if((a+b+c-t)<=t)
        {
            printf("Area = %.1lf\n",(a+b)*c/2);
        }
        else
        {
            printf("Perimetro = %.1lf\n",a+b+c);
        }
    }
    return 0;
}
