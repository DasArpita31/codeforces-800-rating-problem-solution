#include <stdio.h>
#include <string.h>
int main(){
    char path[101],result[101];
    scanf("%s",path);
    int length = strlen(path);
    int j = 0;
    result[j++] = '/';
    for (int i = 1; i < length; i++){
        if (path[i] == '/' && path[i - 1] == '/'){
            continue;
        }
        result[j++] = path[i];
    }
    if (j > 1 && result[j - 1] == '/'){
        j--;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}
