/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(x>y) swap(x,y);
        x++;
        for(x;x<y;x++)
        {
            if(x%5==2 || x%5==3)
            {
                printf("%d\n",x);
            }
        }
    }
    return 0;
}
