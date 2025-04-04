#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char palabra1[30];  
char palabra2[30];  
char pal[30];     
    printf("Ingresa la primer palabra:");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra:");
    scanf("%s", palabra2);
    printf("\nAntes:\n");
    printf("Palabra1: %s\n", palabra1);
    printf("Palabra2: %s\n\n", palabra2);
    strcpy(pal, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, pal);
    printf("Despues:\n");
    printf("Palabra1: %s\n", palabra1);
    printf("Palabra2: %s\n", palabra2);
system("pause");
return 0;
}