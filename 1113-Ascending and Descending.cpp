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
    while(scanf("%d %d",&x,&y)&&x!=y)
    {
        if(x<y) printf("Crescente\n");
        else    printf("Decrescente\n");
    }
    return 0;
}
