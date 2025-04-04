#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int max='a';
        for (int i=0;i<n;i++) {
            if (s[i]>max) {
                max=s[i];
            }
        }
        printf("%d\n", max-'a'+1);
    }
    return 0;
}