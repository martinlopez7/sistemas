#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
    int var1 = 10, var2 = 20;
    pid_t pid;
    printf("Hola Mundo, soy el primer proceso con PID %d\n", getpid());
    pid = fork();

    if(pid>0){
        puts("Soy el proceso padre");
        wait(NULL);
        printf("La var1 es %d y la var2 es %d El hijo ha terminado\n", var1, var2);
    }else if (pid==0){
        printf("Soy el proceso %d y mi padre es el proceso %d\n", getpid(), getppid());
        
        puts("Introduce dos numeros");
        scanf("%d", &var1);
        scanf("%d", &var2);
        printf("La resta es %d\n", var1-var2);
    }else{
        perror("Me ha programado el becario, error fatal");
    }
    return 0;
}
