#include <stdio.h>
#include <string.h>

int main(void)
{
    //declaramos dos strings
    char str1[7]="Hola, ";
    char str2[]="Mundo!";

    printf("La longitud de la cadena es: %lu\n", strlen(str1));
    printf("La longitud de la cadena es: %zu\n", sizeof(str1));

    //strcat(str1, str2);
    //printf("La cadena concatenada es %s\n", str1);


    char *c = str1;
    for (int i = 0; i < sizeof(str1); i++)
    {
        printf("%c", *c);
        c++;
    }

    printf("%c", *c);
    
    
    return 0;
}
