#include <stdio.h>

int main(int argc, char *argv[], char *env[])
{
    int i = 0;
    while (env[i]){
        printf("%s\n", env[i]);
        i++;
    }
    i=0;
    /*
    while(argv[i]){
    printf("%s\n", argv[i]);
    i++;
    }
    */
   return 0;
}