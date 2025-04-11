#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    scanf("%s",s);
    int i=0;
    int ok=1;
    while (s[i]) {
        if (strncmp(&s[i],"144", 3) == 0){
            i += 3;
        } else if (strncmp(&s[i],"14", 2) == 0){
            i += 2;
        } else if (s[i] == '1') {
            i += 1;
        } else {
            ok = 0;
            break;
        }
    }
    if (ok) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
