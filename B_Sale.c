#include<stdio.h>
int main()
{
    int n,m,i,j,temp=0;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sum=0,count=0;
    for(i=0;i<n && count<m;i++){
        if(arr[i]<0){
            sum += -arr[i];
            count++;
        }
    }
    printf("%d\n",sum);
}