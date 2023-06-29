#include <stdio.h>
#include <conio.h>

#define MAX_N 100
#define MAX_M 100

void imprimirMatriz(char matriz[MAX_N][MAX_M], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;

    printf("Ingrese el número de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el número de columnas (M): ");
    scanf("%d", &M);

    // Verificar límites de dimensiones de la matriz
    if (N <= 0 || N > MAX_N || M <= 0 || M > MAX_M) {
        printf("Las dimensiones ingresadas son inválidas.\n");
        return 1;
    }

    char matriz[MAX_N][MAX_M];

    // Llenar matriz con espacios en blanco
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i][j] = ' ';
        }
    }

    // Agregar asterisco (*) en la posición 0,0
    matriz[0][0] = '*';

    // Variables para almacenar la posición actual del asterisco
    int fila = 0;
    int columna = 0;

    imprimirMatriz(matriz, N, M);

    char tecla;
    while (1) {
        tecla = getch();

        // Mover el asterisco según la tecla presionada
        if (tecla == 'w' || tecla == 'W' || tecla == 'a' || tecla == 'A' ||
            tecla == 's' || tecla == 'S' || tecla == 'd' || tecla == 'D') {
            // Borrar asterisco de la posición actual
            matriz[fila][columna] = ' ';

            // Actualizar posición del asterisco
            if (tecla == 'w' || tecla == 'W') {
                if (fila > 0) {
                    fila--;
                }
            } else if (tecla == 'a' || tecla == 'A') {
                if (columna > 0) {
                    columna--;
                }
            } else if (tecla == 's' || tecla == 'S') {
                if (fila < N - 1) {
                    fila++;
                }
            } else if (tecla == 'd' || tecla == 'D') {
                if (columna < M - 1) {
                    columna++;
                }
            }

            // Colocar asterisco en la nueva posición
            matriz[fila][columna] = '*';

            // Limpiar pantalla
    	}
	}
}
    
	