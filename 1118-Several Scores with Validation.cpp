/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,i;
    x=y=i=0;
    while(scanf("%lf",&x))
    {
        if(i==3)
        {
            if(x==2)
            {
                break;
            }
            else if(x==1)
            {
                i=0;
                continue;
            }
            else
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
        }
        else
        {
            if(x<0 || x>10)
            {
                printf("nota invalida\n");
            }
            else
            {
                y+=x;
                i++;
            }
            if(i==2)
            {
                printf("media = %.2lf\n",y/i);
                i++,y=0;
            }
        }
        if(i==3)
            printf("novo calculo (1-sim 2-nao)\n");
    }
    return 0;
}
