#include<stdio.h>
int main(){
    int k,l,m,n,d;
    int count=0;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&d);
    if (k==1||l==1||m==1||n==1){
        printf("%d\n",d);
        return 0;
    }
    for (int i=1;i<=d;i++) {
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
