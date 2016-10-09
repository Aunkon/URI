#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a==0 || b*b-4*a*c<0)
        {
            printf("Impossivel calcular\n");
        }
        else
        {
            printf("R1 = %.5lf\nR2 = %.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
        }
    }
    return 0;
}
