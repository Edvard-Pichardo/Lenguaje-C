// Programa para calcular manzanas para un pequeño fabricante de pasteles
/* Me di cuenta que utilizando dos lineas diagonales juntas puedo escribir
que se encuentren en una sola linea */

#include <stdio.h>

int main(void){

   unsigned short int x; //entero corto -0 a 255
   int manzanasT;
   char y;
   float esencia;
   x=6;
   manzanasT=5*x;
   esencia=(1.253*x);
   

     printf("\n\n%d pasteles requieren %d manzanas y %3.3f cc de esencia de canela.\n\n", x, manzanasT, esencia);
     printf("Introduce un caracter/letra (No un numero): ");
     y = getchar();
     printf("Has introducido el caracter: %c \n", y);
     return 0;
}
