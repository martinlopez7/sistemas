#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
    int var1, var2;
    pid_t suma, resta;
    puts("Introduce dos numeros");
    scanf("%d", &var1);
    scanf("%d", &var2);

    if(suma = fork()> 0) {
        resta = fork();
        
    }if(suma == 0 && resta !=0) {
        printf("Proceso SUMA: La suma de %d y %d es %d\n", var1, var2, var1 + var2);
    }else if(resta ==0) {
        perror("Error al crear proceso resta");
        printf("Proceso RESTA: La resta de %d y %d es %d\n", var1, var2, var1 - var2);
    } else{
        while(wait(NULL) > 0);
        puts("Adios");
    }
    

    return 0;
}
