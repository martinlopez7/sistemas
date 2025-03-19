#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Hola Mundo, soy el primer proceso %d\n", getpid());
    fork();
    fork();
    printf("Hola Mundo, soy el proceso %d\n", getpid());
    return 0;
}
