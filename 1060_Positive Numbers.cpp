/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int c,i;
    while(scanf("%lf",&n)!=EOF)
    {
        c=0;
        if(n>0) c++;
        for(i=0;i<5;i++)
        {
            scanf("%lf",&n);
            if(n>0) c++;
        }
        printf("%d valores positivos\n",c);
    }
    return 0;
}
