#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), compare);
        int count = 0;
        int teamSize = 0;
        for (int i = 0; i < n; i++) {
            teamSize++;
            if (teamSize * a[i] >= x) {
                count++;
                teamSize = 0;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}