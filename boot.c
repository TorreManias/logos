#include "directorio.c"

// Prototipos
void bootIn(void);

void main(void){
    bootIn();
    cargarDirectorio();
}

void bootIn(void){
    system("cls");
    printf("Hello, LogOS.\n");
    system("pause");
}
