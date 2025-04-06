#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,k,ans=0;
        scanf("%lld%lld%lld",&a,&b,&k);
       
            if(k%2==0)
            {
                ans=(a-b)*(k/2);
            }
            else
                ans=(a-b)*(k/2)+a;  
        
        printf("%lld\n",ans);
    }
}