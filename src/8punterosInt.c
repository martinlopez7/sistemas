#include <stdio.h>

int main(void)
{
    int var=20;
    int *p=NULL;
    printf("El valor de la varible es %d y su direccion es %p\n", var, &var);
    p = &var;
    printf("El puntero apunta a %p y esa dirección contiene el valor %d\n", p, *p);


    return 0;
}
