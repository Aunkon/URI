/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pa,pb,t,c;
    double ga,gb;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
        while(pa<=pb)
        {
            pa+=pa*ga/100;
            pb+=pb*gb/100;
            c++;
            if(c>100)
            {
                break;
            }
        }
        if(c>100)   printf("Mais de 1 seculo.\n");
        else        printf("%d anos.\n",c);
    }
    return 0;
}
