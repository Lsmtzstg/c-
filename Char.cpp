#include <stdio.h>
#include <stdlib.h>
struct CD {
    char titulo[100];
    char artista[50];
};
int main(void) {
    struct CD cd1;
    printf("Ingresa el título:\n");
    fgets(cd1.titulo, sizeof(cd1.titulo), stdin);
    printf("Título ingresado: %s\n", cd1.titulo);
    system("pause");
    return 0;
}