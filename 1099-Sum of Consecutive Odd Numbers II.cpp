/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    scanf("%d",&n);
    while(n--)
    {
        t=0;
        scanf("%d %d",&x,&y);
        if(x>y)     swap(x,y);
        if(x%2==0)  x++;
        else        x+=2;
        if(y%2==0)  y--;
        else        y-=2;
        for(x;x<=y;x+=2)
        {
            t+=x;
        }
        printf("%d\n",t);
    }
    return 0;
}
