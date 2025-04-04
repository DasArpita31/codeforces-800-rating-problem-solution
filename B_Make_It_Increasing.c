#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,arr[30];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);   
            int a=0;
            for (int i=n-2;i>=0;i--) {
                while (arr[i]>=arr[i+1]&&arr[i]>0){
                    arr[i]/=2;
                    a++;
                }
                if (arr[i]>=arr[i+1]){
                    a=-1;
                    break;
                }
            }
            printf("%d\n",a);
        }
     return 0;
}
    