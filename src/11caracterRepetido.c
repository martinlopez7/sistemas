#include <stdio.h>

int main() {
    char palabra[100];
    int i, j;
    
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    
    for (i = 0; palabra[i] != '\0'; i++) {
        for (j = i + 1; palabra[j] != '\0'; j++) {
            if (palabra[i] == palabra[j]) {
                printf("Hay caracteres repetidos: '%c'\n", palabra[i]);
                return 0;
            }
        }
    }
    
    printf("No hay caracteres repetidos.\n");
    return 0;
}
