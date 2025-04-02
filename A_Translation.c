#include <stdio.h>
#include <string.h>
int main() {
    char s[101],t[101];
    scanf("%s", s);
    scanf("%s", t);
    if (strlen(s) != strlen(t)) {
        printf("NO\n");
        return 0;
    }
    int len = strlen(s);
    int reverse = 1;
    for (int i = 0; i < len; i++) {
        if (s[i] != t[len - i - 1]) {
            reverse = 0;
            break;
        }
    }
    if (reverse)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
