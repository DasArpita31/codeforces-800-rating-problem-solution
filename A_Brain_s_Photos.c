#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char pixel;
    int color=0;
    for (int i = 0; i < n * m; i++) {
        scanf(" %c", &pixel);
        if (pixel == 'C' || pixel == 'M' || pixel == 'Y'){
            color=1;
        }
    }
    if (color){
        printf("#Color\n");
    } else {
        printf("#Black&White\n");
    }
    return 0;
}
