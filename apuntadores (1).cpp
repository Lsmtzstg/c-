#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x;
    char *arr = NULL;
    char *p;

    printf("Ingrese el tamaño del arreglo: ");
    if (scanf("%d", &x) != 1 || x <= 0) {
        return 1;
    }

    arr = (char *) malloc(x * sizeof(char));
    if (arr == NULL) {
        return 1;
    }

    printf("Ahora ingrese %d caracteres.\n", x);
    p = arr;
    for (int i = 0; i < x; i++) {
        scanf(" %c", p);
        p++;
    }

    p = arr + (x - 1);
    for (int i = x - 1; i >= 0; i--) {
        putchar(*p);
        p--;
    }
    putchar('\n');

    free(arr);
    return 0;
}