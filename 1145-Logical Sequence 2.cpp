/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        for(i=1;i<=y;i++)
        {
            if(i%x==0)
            {
                printf("%d",i);
                printf("\n");
            }
            else
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}
