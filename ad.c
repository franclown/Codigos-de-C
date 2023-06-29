#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("[%d] ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    // Verificar tamaño del arreglo
    if (N <= 0) {
        printf("El tamaño del arreglo debe ser mayor a cero.\n");
        return 1;
    }

    int arreglo[N];

    // Llenar la primera posición con 1 y el resto con 0
    arreglo[0] = 1;
    for (int i = 1; i < N; i++) {
        arreglo[i] = 0;
    }

    imprimirArreglo(arreglo, N);

    int posicion = 0;
    char tecla;
    while (posicion < N) {
        tecla = getch();

        if (tecla == 'd' || tecla == 'D' || tecla == 'a' || tecla == 'A') {
            // Limpiar pantalla
            system("cls");

            // Desplazar el número 1 hacia la derecha o izquierda
            arreglo[posicion] = 0;
            if (tecla == 'd' || tecla == 'D') {
                posicion++;
            } else if (tecla == 'a' || tecla == 'A') {
                posicion--;
            }
            if (posicion >= 0 && posicion < N) {
                arreglo[posicion] = 1;
            }

            // Imprimir el arreglo actualizado
            imprimirArreglo(arreglo, N);
        }
    }

    return 0;
}