/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    while(scanf("%lf %lf",&x,&y)!=EOF)
    {
        if(x==0 && y==0)
        {
            printf("Origem\n");
        }
        if(x==0 && y!=0)
        {
            printf("Eixo Y\n");
        }
        if(x!=0 && y==0)
        {
            printf("Eixo X\n");
        }
        if(x>0 && y>0)
        {
            printf("Q1\n");
        }
        if(x<0 && y>0)
        {
            printf("Q2\n");
        }
        if(x<0 && y<0)
        {
            printf("Q3\n");
        }
        if(x>0 && y<0)
        {
            printf("Q4\n");
        }
    }
    return 0;
}
