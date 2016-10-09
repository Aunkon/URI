/****       Md. Walid Bin khalid Aunkon                  ****/
/****       Daffodil International University            ****/
/****       ID:     121-15-1669                          ****/
/****       Email:  mdwalidbinkhalidaunkon@gmail.com     ****/
/****       Mobile No:  +88-01916-492926                 ****/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int bd,bh,bm,bs,fd,fh,fm,fs;
    char t[3];
    while(scanf("%s %d %d %s %d %s %d",&t,&bd,&bh,&t,&bm,&t,&bs)!=EOF)
    {
        scanf("%s %d %d %s %d %s %d",&t,&fd,&fh,&t,&fm,&t,&fs);
        //ts=(fd-bd)*86400+(fh-bh)*3600+(fm-bm)*60+fs-bs;
        //ts=((fd-bd-1)*86400)+((23-bh)*3600)+((59-bm)*60)+(60-bs)+(fh*3600)+(fm*60)+fs;
        /*fd=ts/86400;
        ts%=86400;
        fh=ts/3600;
        ts%=3600;
        fm=ts/60;
        ts%=60;*/
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
}
