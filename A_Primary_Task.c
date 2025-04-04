#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];
        scanf("%s", s);
        int x = strlen(s);
        if (x == 3) {
            if (s[0] == '1' && s[1] == '0' && s[2] != '0' && s[2] != '1') {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if (x > 3) {
            if (s[0] == '1' && s[1] == '0' && s[2] != '0') {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

