/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d",&x);
            if(x>0)
            {
                if(x%2==0)  printf("EVEN POSITIVE\n");
                else        printf("ODD POSITIVE\n");
            }
            else if(x<0)
            {
                if(x%2==0)  printf("EVEN NEGATIVE\n");
                else        printf("ODD NEGATIVE\n");
            }
            else            printf("NULL\n");
        }
    }
    return 0;
}
