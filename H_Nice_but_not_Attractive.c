#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int num=n;
        while (1){
            int temp=num;
            int i=1;
            while (temp>0){
                int digit=temp%10;
                if (digit!=6&&digit!=9){
                    i=0;
                    break;
                }
                temp=temp/10;
            }
            if (i){
                printf("%d\n",num);
                break;
            }
            num++;
        }
    }
    return 0;
}
