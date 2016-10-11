/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        t=0;
        if(x>y) swap(x,y);
        for(x;x<=y;x++)
        {
            if(x%13!=0) t+=x;
        }
        printf("%d\n",t);
    }
    return 0;
}
