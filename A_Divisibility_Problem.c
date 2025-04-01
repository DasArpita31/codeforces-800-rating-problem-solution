#include<stdio.h>
int main()
{
 int t,a,b,result=0;
 scanf("%d",&t);
 while(t--)
 {
        scanf("%d%d",&a,&b);
   if(a%b==0)
   printf("0\n");
   else{
      result= b-(a%b);
   printf("%d\n",result);
   }
}
 }