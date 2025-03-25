#include <stdio.h>
int main() {
    int arreglo[5];
    int i = 0;
    
    while (i < 5){
    arreglo[i] = 2 * (i + 1);
    i++;
    }
    i = 0;
    while(i < 5){
    printf("2 * %d = %d\n",i + 1, arreglo[i]);
    i++;
    }
    return  0;
    
    }