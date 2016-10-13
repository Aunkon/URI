/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int x,i,s;
    while(scanf("%d",&x)&&x!=0)
    {
        s=0;
        if(x%2!=0)  x++;
        for(i=1;i<=5;i++)
        {
            s+=x;
            x+=2;
        }
        printf("%d\n",s);
    }
    return 0;
}
