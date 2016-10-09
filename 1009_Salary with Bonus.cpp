#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[50];
    double b,c;
    scanf("%s %lf %lf",&a,&b,&c);
    printf("TOTAL = R$ %.2lf\n",(b+(c*15/100)));
    return 0;
}
