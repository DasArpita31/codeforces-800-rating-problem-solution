#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,d;
    char s[100001];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%s",s);
    int sum=0;
    for (int i=0;i<strlen(s);i++){
        if (s[i]=='1'){
            sum += a;
        } else if (s[i]=='2'){
            sum += b;
        } else if (s[i]=='3'){
            sum += c;
        } else if (s[i]=='4'){
            sum += d;
        }
    }
    printf("%d\n", sum);
    return 0;
}
