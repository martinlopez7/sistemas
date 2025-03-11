#include <stdio.h>
int main(void){
    //Pide al usuario un numero y lo almacena en la variable numUsuario
    int numUsuario;
    puts("Dame el valor de un numero:");
    scanf("%d", &numUsuario);
    
    //Se definen dos variables que tendran los dos numeros iniciales de la sucesion y se añade una variable int vacia que sera la suma de los dos numeros anteriores
    int primerNumero = 0;
    int segundoNumero = 1;
    int siguiente;
    
    //Si el numero es positivo printa tantos numeros de la sucesion fibonacci como valor tenga la variable numUsuario
    if (numUsuario > 0)
    {
        printf("Los primeros %d números de Fibonacci son: ", numUsuario);
        for (int i = 0; i <= numUsuario; i++)
        {
            //Las dos primeras vueltas del bucle simplemente se imprimira el numero de la vuelta
            if (i <= 1)
            {
                printf("%d ", i);  // Agregado espacio después del número
            } else {
                //Las siguientes vueltas la variable "siguiente" sera la suma de los numeros anteriores y se printará
                siguiente = primerNumero + segundoNumero;
                printf("%d ", siguiente);
                //Posteriormente se actualizan las variables para poder seguir calculando la sucesion
                primerNumero = segundoNumero;
                segundoNumero = siguiente;
            }
        }

    } else {
        //Si el numero que ingresa el usuario es negativo se calcula su valor absoluto multiplicandolo por -1
        int posicion = numUsuario * (-1);
        //Si este numero corresponde con el 0 o el 1 simplemente se imprimira ese numero ya que esos numeros son los dos iniciales de la sucesión y no necesitan ningún cálculo
        if (posicion <= 1) {
            printf("El número de Fibonacci en la posición %d es: %d\n", posicion, posicion);
        } else {
            //Se ejecuta un bucle que va desde 2 hasta el valor absoluto del numero ingresado
            for (int i = 2; i < posicion; i++) {
                //Calculo del siguiente numero de la sucesión
                siguiente = primerNumero + segundoNumero;
                //Posteriormente se actualizan las variables para poder seguir calculando la sucesion
                primerNumero = segundoNumero;
                segundoNumero = siguiente;
            }
            printf("El número de Fibonacci en la posición %d es: %d\n", posicion, segundoNumero);
        }
    }
    return 0;
}