#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[4],b[4],temp=0;
        scanf("%s%s",&a,&b);
        temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        printf("%s %s\n",a,b);
    }
}