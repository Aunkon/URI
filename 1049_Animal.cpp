/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[15];
    while(scanf("%s",&a)!=EOF)
    {
        if(a[2]=='r')
        {
            scanf("%s",&a);
            if(a[2]=='e')
            {
                scanf("%s",&a);
                if(a[2]=='r')
                {
                    printf("aguia\n");
                }
                else
                {
                    printf("pomba\n");
                }
            }
            else
            {
                scanf("%s",&a);
                if(a[2]=='i')
                {
                    printf("homem\n");
                }
                else
                {
                    printf("vaca\n");
                }
            }
        }
        else
        {
            scanf("%s",&a);
            if(a[2]=='s')
            {
                scanf("%s",&a);
                if(a[2]=='m')
                {
                    printf("pulga\n");
                }
                else
                {
                    printf("lagarta\n");
                }
            }
            else
            {
                scanf("%s",&a);
                if(a[2]=='m')
                {
                    printf("sanguessuga\n");
                }
                else
                {
                    printf("minhoca\n");
                }
            }
        }
    }
    return 0;
}
