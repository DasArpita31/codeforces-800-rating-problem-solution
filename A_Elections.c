#include<stdio.h>
int main()
{
    int t;
    long long maxab=0,maxbc=0,maxac=0;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
       if(b>c){
        maxbc=b;
       }
       else
       maxbc=c;
       if(a>b)
       {
        maxab=a;
       }
       else
       maxab=b;
       if(c>a)
       maxac=c;
       else
       maxac=a;
       long long A,B,C;
       if(maxbc-a+1>0)
       A=maxbc-a+1;
       else
       A=0;
       if(maxac-b+1>0)
       B=maxac-b+1;
       else
       B=0;
       if(maxab-c+1>0)
       C=maxab-c+1;
       else
       C=0;
       printf("%lld %lld% lld\n",A,B,C);
    }
}