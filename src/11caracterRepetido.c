#include <stdio.h>

int main() {
    char palabra[100];
    int i, j;

    // Leer la palabra ingresada por el usuario
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    // Comparar cada carácter con los siguientes para encontrar repeticiones
    for (i = 0; palabra[i] != '\0'; i++) {
        for (j = i + 1; palabra[j] != '\0'; j++) {
            if (palabra[i] == palabra[j]) {
                printf("Hay caracteres repetidos: '%c'\n", palabra[i]);
                return 0;  // Terminar el programa si se encuentra un carácter repetido
            }
        }
    }

    // Mensaje si no se encuentran caracteres repetidos
    printf("No hay caracteres repetidos.\n");
    return 0;
}
