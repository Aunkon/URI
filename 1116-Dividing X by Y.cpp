/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x,y;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf",&x, &y);
        if(y==0)    printf("divisao impossivel\n");
        else
        {
            printf("%.1lf\n",x/y);
        }
    }
    return 0;
}
