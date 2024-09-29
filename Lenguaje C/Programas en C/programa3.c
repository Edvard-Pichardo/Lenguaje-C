#include <stdio.h>
//Programa 3: Programa simple que suma los primeros n números naturales

int main(void){

     int m=0;

     printf("Introduce el número de vueltas: ");
     scanf("%2d", &m);
     unsigned int s=0, i=1;

     while (i<=m){ //comienza el cilo while
       s=s+i;
       i=i+1;
    } //termina el ciclo while
    
    printf("Después de %i vueltas ", m);
    printf("la suma es %d\n", s);
     return 0;
} //fin del main


