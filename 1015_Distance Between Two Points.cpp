#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf %lf %lf",&a,&c,&b,&d)!=EOF)
    {
        printf("%.4lf\n",sqrt((a-b)*(a-b)+(c-d)*(c-d)));
    }
    return 0;
}
