/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,t;
    while(scanf("%lf",&i)!=EOF)
    {
        t=0;
        if(i>4500.00)
        {
            t+=(i-4500.00)*28/100;
            i=4500.00;
        }
        if(i>3000.00 && i <= 4500.00)
        {
            t+=(i-3000.00)*18/100;
            i=3000.00;
        }
        if(i>2000.00 && i <= 3000.00)
        {
            t+=(i-2000.00)*8/100;
            i=2000.00;
        }
        if(t!=0)
        {
            printf("R$ %.2lf\n",t);
        }
        else
        {
            printf("Isento\n");
        }
    }
    return 0;
}
