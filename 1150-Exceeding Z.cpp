/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,s,c;
    scanf("%d %d",&x,&z);
    s=c=0;
    while(z<=x)
    {
        scanf("%d",&z);
    }
    while(s<z)
    {
        c++;
        s+=x++;
    }
    printf("%d\n",c);
    return 0;
}
