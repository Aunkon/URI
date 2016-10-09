/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,i;
    while(scanf("%d",&a)!=EOF)
    {
        c=0;
        if(a%2==0) c++;
        for(i=1;i<5;i++)
        {
            scanf("%d",&a);
            if(a%2==0) c++;
        }
        printf("%d valores pares\n",c);
    }
    return 0;
}
