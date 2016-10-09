/***        Md. Walid Bin Khalid Aunkon         ***/
/***        mdwalidbinkhalidaunkon@gmail.com    ***/
/***        Daffodil International University   ***/
/***        Contact No:     01916492926         ***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,p,coin[6]={1,.50,.25,.10,.05,.01};
    int t,n,f,note[6]={100,50,20,10,5,2};
    while(scanf("%lf",&m)!=EOF)
    {
        printf("NOTAS:\n");
        n=(int) m;
        for(int i=0;i<6;i++)
        {
            t=n/note[i];
            printf("%d nota(s) de R$ %d.00\n",t,note[i]);
            n%=note[i];
        }
        printf("MOEDAS:\n");
        for(int i=0;i<6;i++)
        {
            if(i==0)
            {
                t=n/coin[i];
                printf("%d moeda(s) de R$ %.2lf\n",t,coin[i]);
                p= m*1000;
                t= p;
                n= m;
                n*= 1000;
                n= t-n;
                n/= 10;
                //printf("%d %d\n",t,n);
            }
            else
            {
                f= coin[i]*1000;
                t= n/(f/10);
                printf("%d moeda(s) de R$ %.2lf\n",t,coin[i]);
                n%=(int) (coin[i]*100);
                //printf("%d\n",n);
            }
        }
    }
    return 0;
}
