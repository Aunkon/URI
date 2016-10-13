/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,N,S;
    scanf("%d",&A);
    S=0;
    scanf("%d",&N);
    while(N<=0)
    {
        scanf("%d",&N);
    }
    while(N--)
    {
        S+=A++;
    }
    printf("%d\n",S);
    return 0;
}
