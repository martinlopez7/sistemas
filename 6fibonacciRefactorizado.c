#include <stdio.h>
int nFibonacci (int);
void secFibonacci (int);

int main(void) {
    // Pide al usuario un numero y lo almacena en la variable numUsuario
    int numUsuario;
    puts("Dame el valor de un numero:");
    scanf("%d", &numUsuario);
    
    // Si el número es positivo, muestra la secuencia Fibonacci
    if (numUsuario > 0) {
        secFibonacci(numUsuario);
    } else {
        // Si el número es negativo, calcula su valor absoluto
        int posicion = numUsuario * (-1);
        printf("El número de Fibonacci en la posición %d es: %d\n", posicion, nFibonacci(posicion));
    }
    
    return 0;
}

// Función que calcula el número de Fibonacci en la posición n
int nFibonacci(int n) {
    // Si la posición es 0 o 1, el número de Fibonacci es el mismo valor
    if (n <= 1) {
        return n;
    }
    
    //Se definen dos variables que tendran los dos numeros iniciales de la sucesion y se añade una variable int vacia que sera la suma de los dos numeros anteriores
    int primerNumero = 0;
    int segundoNumero = 1;
    int siguiente;
    
    //Se ejecuta un bucle que va desde 2 hasta el valor absoluto del numero ingresado
    for (int i = 2; i <= n; i++) {
        siguiente = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = siguiente;
    }
    
    return segundoNumero;
}

// Función que imprime la secuencia de Fibonacci hasta el término n
void secFibonacci(int n) {
    printf("Los primeros %d números de Fibonacci son: ", n);
    
    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            printf("%d ", i);
        } else {
            printf("%d ", nFibonacci(i));
        }
    }
    printf("\n");
}

