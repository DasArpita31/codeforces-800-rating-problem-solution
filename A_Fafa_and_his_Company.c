#include <stdio.h>
int main(){
    int n,count = 0;
    scanf("%d",&n);
    for (int l=1;l<n;l++){
        if (n%l==0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
