#include<stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    int max=0;
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]>max){
            max=a[i];
        }
    }
    int total = 0;
    for (int i=0;i<n;i++){
        total+=(max-a[i]);
    }
    printf("%d\n",total);
    return 0;
}

