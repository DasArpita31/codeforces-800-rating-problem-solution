#include<stdio.h> 
int main()
{
 int t,n,m,diff=0;
 scanf("%d",&t);
 while(t--)
 { 
  scanf("%d%d",&n,&m);
  if(n>m || n==m)
  {
   diff=n-m;
  if(diff%2==0)
  printf("Yes\n");
  else
  printf("No\n");
 }
 else
 printf("No\n");
 }
 }