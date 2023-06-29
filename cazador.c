//Cazador de tesoros

#include <stdio.h>
#include <conio.h>

int main() {
    int opcion = 1;
    char tecla;

    while (1) {
        system("cls");  // Limpia la pantalla (Windows)

        // Imprime el men� con las opciones
        printf("=== Men� ===\n");
        printf("%s Opcion 1\n", opcion == 1 ? "->" : "  ");
        printf("%s Opci�n 2\n", opcion == 2 ? "->" : "  ");
        printf("%s Opci�n 3\n", opcion == 3 ? "->" : "  ");
        printf("%s Salir\n", opcion == 4 ? "->" : "  ");
        
        tecla = getch();  // Captura la tecla presionada

        // Actualiza la opci�n seleccionada seg�n la tecla presionada
        if (tecla == 'w' && opcion > 1) {
            opcion--;
        } else if (tecla == 's' && opcion < 4) {
            opcion++;
        } else if (tecla == '\r') {  // Tecla Enter
            system("cls");  // Limpia la pantalla antes de ejecutar la opci�n seleccionada
            
            // Ejecuta la opci�n seleccionada
            switch (opcion) {
                case 1:
                    printf("Has seleccionado la Opci�n 1.\n");
                    break;
                case 2:
                    printf("Has seleccionado la Opci�n 2.\n");
                    break;
                case 3:
                    printf("Has seleccionado la Opci�n 3.\n");
                    break;
                case 4:
                    printf("Saliendo del programa...\n");
                    return 0;
                default:
                    printf("Opci�n inv�lida.\n");
            }

            printf("Presiona cualquier tecla para continuar...\n");
            getch();  // Espera a que el usuario presione una tecla antes de volver al men�
        }
    }

    return 0;
}
