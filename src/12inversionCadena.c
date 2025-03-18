#include <stdio.h>

int main() {
    char str[255], *ptr1, *ptr2, temporal;

    // Leer la cadena ingresada por el usuario
    printf("Ingresa una palabra: ");
    scanf("%s", str);

    ptr1 = str;  // Apunta al inicio de la cadena
    ptr2 = str;  // Apunta al inicio de la cadena
    
    // Mover ptr2 al final de la cadena
    while (*ptr2 != '\0') {
        ptr2++;
    }
    ptr2--;  // Retroceder a la última posición válida

    // Intercambiar los caracteres de los extremos hacia el centro
    while (ptr1 < ptr2) {
        temporal = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temporal;
        ptr1++;
        ptr2--;
    }
    
    // Imprimir la cadena invertida
    printf("Cadena invertida: %s\n", str);
    return 0;
}
