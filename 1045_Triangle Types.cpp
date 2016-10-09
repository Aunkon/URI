/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[3];
    while(scanf("%lf %lf %lf",&a[0],&a[1],&a[2])!=EOF)
    {
        sort(a,a+3);
        if(a[2]>=(a[1]+a[0]))
        {
            printf("NAO FORMA TRIANGULO\n");
            continue;
        }
        if(a[2]*a[2]==(a[1]*a[1]+a[0]*a[0]))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if(a[2]*a[2]>(a[1]*a[1]+a[0]*a[0]))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a[2]*a[2]<(a[1]*a[1]+a[0]*a[0]))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a[2]==a[1] && a[1]==a[0])
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if((a[2]==a[1] && a[2]!=a[0]) || (a[2]==a[0] && a[2]!=a[1]) || (a[1]==a[0] && a[2]!=a[1]))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
