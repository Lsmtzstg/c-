#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int len;
    char origen[] = "brisas";
    char destino[11] = "para"; 
    strcat(destino, origen);
    printf("destino: %s", destino);
    system("Pause");
    return 0;
}