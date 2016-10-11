/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,i,g,d;
    x=y=a=i=g=d=0;
    while(scanf("%d %d",&x,&y))
    {
        if(x>y)
        {
            i++;
        }
        else if(x<y)
        {
            g++;
        }
        else
        {
            d++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a==1)
        {
            continue;
        }
        else
        {
            printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",i+g+d,i,g,d);
            if(i>g)
            {
                printf("Inter venceu mais\n");
            }
            else if(i<g)
            {
                printf("Gremio venceu mais\n");
            }
            else
            {
                printf("Nao houve vencedor\n");
            }
            break;
        }
    }
    return 0;
}
