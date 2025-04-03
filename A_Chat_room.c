#include<stdio.h>
#include<string.h>
int main() {
    char s[101];
    scanf("%s",s);
    char target[]="hello";
    int j=0;
    int len=strlen(s);
    for (int i=0;i<len;i++){
        if (s[i] == target[j]){
            j++;
        }
        if (j==5){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
