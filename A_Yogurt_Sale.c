#include<stdio.h>
int main()
{
    int t,price=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        scanf("%d%d%d",&n,&a,&b);
        if(b>(2*a))
        {
        price=(n*a);
        }
        else
        {
        if(n%2==0)
          price=((n/2)*b);
          else
          price=(n/2)*b+a;
        }
        printf("%d\n",price);
    }
}