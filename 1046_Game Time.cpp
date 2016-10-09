/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==b)
        {
            printf("O JOGO DUROU 24 HORA(S)\n");
        }
        else if(a>b)
        {
            printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n",abs(a-b));
        }
    }
    return 0;
}
