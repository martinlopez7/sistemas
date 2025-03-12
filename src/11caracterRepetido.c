#include <stdio.h>
#include <string.h>

int main() {
    char palabra[50];
    int caracteres[256] = {0};
    
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    
    for (int i = 0; i < strlen(palabra); i++) {
        if (caracteres[(unsigned char)palabra[i]]) { 
            printf("Hay caracteres repetidos.\n");
            return 0;
        }
        caracteres[(unsigned char)palabra[i]] = 1;
    }
    
    printf("No hay caracteres repetidos.\n");
    return 0;
}
