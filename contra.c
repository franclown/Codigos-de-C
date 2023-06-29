#include <stdio.h>
#include <conio.h>

#define MAX_LONGITUD 100

void imprimirPassword(int longitud) {
    for (int i = 0; i < longitud; i++) {
        printf("*");
    }
}

int main() {
    char password[MAX_LONGITUD];
    char caracter;
    int i = 0;

    printf("Ingrese la contraseña: ");

    while ((caracter = getch()) != '\r') {
        if (i < MAX_LONGITUD - 1) {
            if (caracter == 8) { // Tecla de retroceso (Backspace)
                if (i > 0) {
                    i--;
                    password[i] = '\0';
                    printf("\b \b"); // Borrar último asterisco de la pantalla
                }
            } else {
                password[i] = caracter;
                i++;
                imprimirPassword(i); // Imprimir asteriscos hasta el momento
            }
        }
    }

    password[i] = '\0'; // Agregar terminador de cadena al final de la contraseña

    printf("\nLa contraseña ingresada es: %s\n", password);

    return 0;
}