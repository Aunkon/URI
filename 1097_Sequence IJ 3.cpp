/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=7;
    for(i=1;i<=9;i+=2)
    {
        printf("I=%d J=%d\n",i,j);
        j--;
        printf("I=%d J=%d\n",i,j);
        j--;
        printf("I=%d J=%d\n",i,j);
        j+=4;
    }
    return 0;
}
