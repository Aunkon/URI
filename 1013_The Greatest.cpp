#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a=(a+b+abs(a-b))/2;
    printf("%d eh o maior\n",((a+c+abs(a-c))/2));
    return 0;
}
