#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0) {
            printf("-1\n");
            continue;
        }
    
        for (int i = 0; i < n; i++) {
            printf("%d%c", (i * 2) % n + 1, (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}