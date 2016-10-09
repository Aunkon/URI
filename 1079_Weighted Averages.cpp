/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double x,y;
    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            y=0;
            for(i=1;i<=3;i++)
            {
                scanf("%lf",&x);
                if(i==1)    y+=x*2;
                if(i==2)    y+=x*3;
                if(i==3)    y+=x*5;
            }
            printf("%.1lf\n",y/10);
        }
    }
    return 0;
}
