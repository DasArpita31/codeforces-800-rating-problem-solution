#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long long M = 1000000007;
    for (int test = 0; test < t; test++){
        long long n, a1,a2;
        scanf("%lld %lld %lld",&n,&a1,&a2);
        long long r=n%6;
        long long sum=0;
        if (r == 0) 
        sum = 0;
        else if (r == 1)
         sum = a1;
        else if (r == 2)
         sum = a1 + a2;
        else if (r == 3)
         sum = 2 * a2;
        else if (r == 4)
         sum = 2 * a2 - a1;
        else if (r == 5) sum = a2 - a1;
        sum = (sum % M + M) % M;
        printf("%lld\n", sum);
    }
    return 0;
}