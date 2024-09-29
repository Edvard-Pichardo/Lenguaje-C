#include <stdio.h>
// En este caso, el especificador de formato contiene
// una anchura de 4 caracteres como minimo
// y un numeromaximo de 4 cracteres a imprimir
// el resultado sera 10.6789

int main(){

     float suma;
     suma = 4+6.6789;

     printf("El especificador es: 4.4\n");
     printf("La suma es: %4.4f", suma);
     printf("\n\nEl especificador es: 4.5\n");
     printf("La suma es: %4.5f", suma);
     printf("\n\nEl especificador es: 4.6\n");
     printf("La suma es: %4.6f\n", suma);
     return 0;
}


