/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,g,d;
    t=a=g=d=0;
    while(scanf("%d",&t))
    {
        if(t==1)        a++;
        else if(t==2)   g++;
        else if(t==3)   d++;
        else if(t==4)
        {
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
            break;
        }
    }
    return 0;
}
