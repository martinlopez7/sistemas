#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    printf("Hola Mundo, soy el primer proceso con PID %d\n", getpid());
    pid = fork();

    if(pid>0){
        puts("Soy el proceso padre");
        wait(NULL);
        puts("EL hijo ha terminado");
    }else if (pid==0){
        int var1, var2;
        puts("Introduce dos numeros");
        scanf("%d", &var1);
        scanf("%d", &var2);
        printf("La suma de %d y %d es %d\n", var1, var2, var1+var2);
    }else{
        perror("Me ha programado el becario, error fatal");
    }
    return 0;
}
