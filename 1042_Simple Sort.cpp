/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3];
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])!=EOF)
    {
        b[0]=a[0],b[1]=a[1],b[2]=a[2];
        sort(a,a+3);
        printf("%d\n%d\n%d\n\n",a[0],a[1],a[2]);
        printf("%d\n%d\n%d\n",b[0],b[1],b[2]);
    }
    return 0;
}
