/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[6],av;
    int i,c;
    while(scanf("%lf",&a[0])!=EOF)
    {
        c=0,av=0;
        if(a[0]>0)
        {
            c++;
            av=a[0];
        }
        for(i=1;i<=5;i++)
        {
            scanf("%lf",&a[i]);
            if(a[i]>0)  c++,av+=a[i];
        }
        printf("%d valores positivos\n%.1lf\n",c,av/c);
    }
    return 0;
}
