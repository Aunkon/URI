/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&j);
        if(j<=0)
        {
            printf("X[%d] = 1\n",i);
        }
        else
        {
            printf("X[%d] = %d\n",i,j);
        }
    }
    return 0;
}
