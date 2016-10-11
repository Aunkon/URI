/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,f;
    y=f=0;
    while(scanf("%lf",&x))
    {
        if(x<0 || x>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            y+=x;
            f++;
        }
        if(f==2)
        {
            printf("media = %.2lf\n",y/2);
            break;
        }
    }
    return 0;
}
