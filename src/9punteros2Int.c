#include <stdio.h>

int main(void)
{
    int numbers[] = {1,2,3,4,5};
    int *ptr = numbers;

    //Metodo tradicional
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    puts("");
    
    //Metodo con punteros
    for (int j = 0; j < 5; j++, ptr++)
    {
        printf("%d ", *ptr);
    }
    printf("%d", numbers[10]);
    return 0;
}
