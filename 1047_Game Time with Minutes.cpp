/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hs,ms,hf,mf,th,tm;
    while(scanf("%d %d %d %d",&hs,&ms,&hf,&mf)!=EOF)
    {
        if(hs==hf && ms==mf)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
        else if(hs==hf && ms>mf)
        {
            th=hf-hs;
            tm=mf-ms;
            if(hs>=hf)   th=24-hs+hf;
            if(ms>=mf)   tm=60-ms+mf,th-=1;
            if(tm>=60)   tm-=60,th+=1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
        }
        else
        {
            th=hf-hs;
            tm=mf-ms;
            if(hs>hf)   th=24-hs+hf;
            if(ms>mf)   tm=60-ms+mf,th-=1;
            if(tm>=60)   tm-=60,th+=1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
        }
    }
    return 0;
}
