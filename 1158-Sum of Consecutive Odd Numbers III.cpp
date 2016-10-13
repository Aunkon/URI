/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,s;
    scanf("%d",&n);
    while(n--)
    {
        s=0;
        scanf("%d %d",&x,&y);
        if(x%2==0)  x++;
        while(y--)
        {
            s+=x++;
            x++;
        }
        printf("%d\n",s);
    }
    return 0;
}
