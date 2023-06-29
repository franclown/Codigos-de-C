#include <stdio.h>
#include <conio.h>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    return (float)a / b;
}

void imprimirResultado(int resultado) {
    printf("El resultado es: %d\n", resultado);
}

void mostrarMenu(int opcionSeleccionada) {
    printf("=== Menu ===\n");
    printf("%s Sumar\n", opcionSeleccionada == 1 ? "->" : " ");
    printf("%s Restar\n", opcionSeleccionada == 2 ? "->" : " ");
    printf("%s Multiplicar\n", opcionSeleccionada == 3 ? "->" : " ");
    printf("%s Dividir\n", opcionSeleccionada == 4 ? "->" : " ");
}

int main() {
    int opcion = 1;
    int tecla;

    do {
        system("cls"); // Limpiar pantalla
        mostrarMenu(opcion);

        tecla = getch();

        switch (tecla) {
            case 72: // Flecha arriba
                opcion--;
                if (opcion < 1) {
                    opcion = 4;
                }
                break;
            case 80: // Flecha abajo
                opcion++;
                if (opcion > 4) {
                    opcion = 1;
                }
                break;
        }

    } while (tecla != 13); // 13 es el código ASCII para la tecla Enter

    int num1, num2;

    switch (opcion) {
        case 1: // Sumar
            printf("Ingrese el primer número: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2);
            imprimirResultado(sumar(num1, num2));
            break;
        case 2: // Restar
            printf("Ingrese el primer número: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2);
            imprimirResultado(restar(num1, num2));
            break;
        case 3: // Multiplicar
            printf("Ingrese el primer número: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2);
            imprimirResultado(multiplicar(num1, num2));
            break;
        case 4: // Dividir
            printf("Ingrese el primer número: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo número: ");
            scanf("%d", &num2);
            // Validar que el divisor no sea cero
            if (num2 != 0) {
                imprimirResultado(dividir(num1, num2));
            } else {
                printf("Error: no se puede dividir entre cero.\n");
            }
    	}
	}	
	
    