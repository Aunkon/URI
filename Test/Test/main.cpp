/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        for(i=1;i<=y;i++)
        {
            for(j=0;j<x;j++)
            {
                if(i>y)    break;
                printf("%d ",i);
                i++;
            }
            printf("\n");
            i--;
        }
    }
    return 0;
}
