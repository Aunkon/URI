/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y) && x!=0 && y!=0)
    {
        if(x>0 && y>0)      printf("primeiro\n");
        else if(x>0 && y<0) printf("quarto\n");
        else if(x<0 && y<0) printf("terceiro\n");
        else                printf("segundo\n");
    }
    return 0;
}
