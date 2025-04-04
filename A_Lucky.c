#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char arr[7];
            scanf("%s",arr);
       int sum1=(arr[0]-'0')+(arr[1]-'0')+(arr[2]-'0');
       int sum2=(arr[3]-'0')+(arr[4]-'0')+(arr[5]-'0');
        if(sum1==sum2)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
    return 0;
}