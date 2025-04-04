#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        if (n == 1){
            printf("1\n");
        } else {
            printf("%d\n",(n+1)/2);
        }
    }
    return 0;
}