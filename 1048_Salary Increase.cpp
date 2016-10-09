/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s;
    while(scanf("%lf",&s)!=EOF)
    {
        if(s>=0 && s<=400.00)
        {
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",(s+(s*15/100)),(s*15/100));
        }
        else if(s>400.00 && s<=800.00)
        {
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",(s+(s*12/100)),(s*12/100));
        }
        else if(s>800.00 && s<=1200.00)
        {
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",(s+(s/10)),(s/10));
        }
        else if(s>1200.00 && s<=2000.00)
        {
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",(s+(s*7/100)),(s*7/100));
        }
        else
        {
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",(s+(s/25)),(s/25));
        }
    }
    return 0;
}
