#include <stdio.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    printf("Hola Mundo, soy el primer proceso con PID %d\n", getpid());
    int var1 = 5, var2=6;
    pid = fork();

    if(pid>0){
        printf("La suma es %d y soy el processo %d\n", var1+var2, getpid());
    }else if (pid==0){
        printf("La resta es %d y soy el proceso %d\n", var1-var2, getpid());
    }else{
        perror("Me ha programado el becario, error fatal");
    }
    
    
    return 0;
}
