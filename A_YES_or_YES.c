#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[4];
        scanf("%s",s);
        if (
            (!strcmp(s, "YES")) || (!strcmp(s, "Yes")) || (!strcmp(s, "yES")) ||
            (!strcmp(s, "YEs")) || (!strcmp(s, "YeS")) || (!strcmp(s, "yEs")) ||
            (!strcmp(s, "yeS")) || (!strcmp(s, "yes"))
        ) 
            printf("YES\n");
            else
            printf("NO\n");
        }
    }