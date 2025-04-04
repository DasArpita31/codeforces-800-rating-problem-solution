#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=(int)sqrt(n);i>=1;--i){
        if (n%i==0){
            return 0;
        }
    }
    printf("%d %d\n",1,n);
    return 0;
}