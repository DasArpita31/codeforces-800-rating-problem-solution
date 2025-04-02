#include<stdio.h>
int main()
{
    int t,current=0,max=0;
    scanf("%d",&t);
    int a,b;
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        current-=a;
        current+=b;
    if(current>max)
   {
     max=current;
   }
}
    printf("%d\n",max);
}