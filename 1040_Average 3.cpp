/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    double N1, N2, N3, N4, Media;
    while(scanf("%lf %lf %lf %lf",&N1, &N2, &N3, &N4)!=EOF)
    {
        Media = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10);
        printf("Media: %.1lf\n",Media);
        if(Media >= 7.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(Media >= 5.0 && Media <= 6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%lf",&N1);
            printf("Nota do exame: %.1lf\n",N1);
            Media+=N1;
            Media/=2;
            if(Media>=5.0)
            {
                printf("Aluno aprovado.\n");
            }
            else
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n",Media);
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
    }
    return 0;
}
