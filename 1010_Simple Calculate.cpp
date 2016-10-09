#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double c,d=0;
    for(int i=1;i<=2;i++)
    {
        scanf("%d %d %lf",&a,&b,&c);
        d+=b*c;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n",d);
    return 0;
}
