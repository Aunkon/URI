/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int bd,bh,bm,bs,fd,fh,fm,fs;
    char t[3];
    while(scanf("%s %d %d %s %d %s %d",&t,&bd,&bh,&t,&bm,&t,&bs)!=EOF)
    {
        scanf("%s %d %d %s %d %s %d",&t,&fd,&fh,&t,&fm,&t,&fs);
        ts=(fd-bd)*86400+(fh-bh)*3600+(fm-bm)*60+fs-bs;
        fd=ts/86400;
        ts%=86400;
        fh=ts/3600;
        ts%=3600;
        fm=ts/60;
        ts%=60;
        fd-=bd;
        if(bs>fs)
        {
            fs+=60-bs;
            fm--;
        }
        else
            fs-=bs;
        if(bm>fm)
        {
            fm+=60-bm;
            fh--;
        }
        else
            fm-=bm;
        if(bh>fh)
        {
            fh+=24-bh;
            fd--;
        }
        else
            fh-=bh;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",fd,fh,fm,fs);
    }
    return 0;
}*/
int main()
{
    int a,b,c,d,e,f,g,h,W,X,Y,Z;


    scanf("Dia %d", &a);
    scanf("%d : %d : %d\n", &b, &c, &d);
    scanf("Dia %d", &e);
    scanf("%d : %d : %d", &f, &g, &h);

    Z=h-d;
    Y=g-c;
    X=f-b;
    W=e-a;

    if(Z<0)
    {
        Z+=60;
        Y--;
    }

    if(Y<0)
    {
        Y+=60;
        X--;
    }

    if(X<0)
    {
        X+=24;
        W--;
    }

    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);

    return 0;

}
