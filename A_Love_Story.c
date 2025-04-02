#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[11];
        scanf("%s", s);
        int diff = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != "codeforces"[i])
             diff++;
        }
        printf("%d\n", diff);
    }
    return 0;
}