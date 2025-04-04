#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        long long n;
        scanf("%lld",&n);
        if (n%2==0){
            printf("2\n");
        } else{
            printf("1\n");
        }
    }
    return 0;
}