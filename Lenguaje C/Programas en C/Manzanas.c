// Programa para calcular manzanas para un pequeño fabricante de pasteles
/* Me di cuenta que utilizando dos lineas diagonales juntas puedo escribir
que se encuentren en una sola linea */

#include <stdio.h>

int main(void){

   unsigned short int x; //entero corto -0 a 255
   int manzanasT;
   char y;
   x=6;
   manzanasT=5*x;
   

     printf("\n\n%d pasteles requieren %d manzanas\n\n", x, manzanasT);
     printf("Introduce un caracter/letra (No un numero): ");
     y = getchar();
     printf("Has introducido el caracter: %c \n", y);
     return 0;
}
