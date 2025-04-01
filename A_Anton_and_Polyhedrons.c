#include <stdio.h>
#include <string.h>
int main(){
    int n,total=0;
    char polyhedron[20];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",polyhedron);
        if (strcmp(polyhedron,"Tetrahedron")==0)
            total+=4;
        else if (strcmp(polyhedron,"Cube")==0)
            total+=6;
        else if (strcmp(polyhedron,"Octahedron")==0)
            total+=8;
        else if (strcmp(polyhedron,"Dodecahedron")==0)
            total+=12;
        else if (strcmp(polyhedron,"Icosahedron")==0)
            total+=20;
    }
    printf("%d\n",total);
    return 0;
}
