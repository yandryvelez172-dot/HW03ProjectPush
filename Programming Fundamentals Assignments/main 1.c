#include <stdio.h>
#include "definirfunciones.h"
void mostrarMenu();

int main() {
    int opcion;
    do {
        mostrarMenu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                int a, b;
                printf("Ingrese un numero: ");
                scanf("%d", &a);
                printf("Ingrese otro numero: ");
                scanf("%d", &b);
                printf("La suma es: %d\n", sumar(a, b));
                break;
            }
            case 2: {
                float base, altura;
                printf("Ingrese la base: ");
                scanf("%f", &base);
                printf("Ingrese la altura: ");
                scanf("%f", &altura);
                printf("El area del triangulo es: %.2f\n", areatriangulo(base, altura));
                break;
            }
            case 3: 
                printf("Finalizando tenga un buen dia ...\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}

void mostrarMenu() {
    printf("\n--- Menú ---\n");
    printf("1. Sumar\n");
    printf("2. Calcular el area de un triangulo\n");
    printf("3. Salir\n");
}
