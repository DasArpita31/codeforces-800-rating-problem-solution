#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,a[105];
        scanf("%d",&n);
        for (int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int common;
        if(a[0]==a[1]){
            common=a[0];
        } else if(a[0]==a[2]){
            printf("2\n");
            continue;
        } else{
            printf("1\n");
            continue;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=common){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
