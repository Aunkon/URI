#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    double snack[5]={4,4.5,5,2,1.5};
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        printf("Total: R$ %.2lf\n",snack[x-1]*y);
    }
    return 0;
}
