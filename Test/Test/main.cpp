/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,r;
    while(scanf("%d %d",&x,&y)!=0)
    {
        r=0;
        if(x>y)     swap(x,y);
        if(x%2==0)  x++;
        if(y%2==0)  y--;
        for(++x;x<y;x+=2)
        {
            r+=x;
        }
        printf("%d\n",r);
    }
    return 0;
}
