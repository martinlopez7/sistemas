#include <stdio.h>

int main(void){
    int var1;
    int var2;
    puts("Dame el valor del primer sumando");
    scanf("%d", &var1);
    puts("Dame el valor del segundo sumando");
    scanf("%d", &var2);
    printf("La suma de %d y %d es %d", var1, var2, var1+var2);
    return 1;
}