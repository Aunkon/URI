/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        switch (a)
        {
            case 61 : printf("Brasilia\n");
                      continue;
            case 71 : printf("Salvador\n");
                      continue;
            case 11 : printf("Sao Paulo\n");
                      continue;
            case 21 : printf("Rio de Janeiro\n");
                      continue;
            case 32 : printf("Juiz de Fora\n");
                      continue;
            case 19 : printf("Campinas\n");
                      continue;
            case 27 : printf("Vitoria\n");
                      continue;
            case 31 : printf("Belo Horizonte\n");
                      continue;
            default : printf("DDD nao cadastrado\n");
                      continue;
        }
    }
    return 0;
}
