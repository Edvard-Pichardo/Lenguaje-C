#include <stdio.h>
//Programa 3 con for: Programa simple que suma los primeros n números naturales

int main(void){

     int m=0;

     printf("Introduce el número de vueltas: ");
     scanf("%2d", &m);
     unsigned int s=0, i;

      for(i=1;i<=m;i++){ //comienzaciclo for
            s=s+i; 
      } //termina ciclo for
    
    printf("Después de %i vueltas ", m);
    printf("la suma es %d\n", s);
     return 0;
} //fin del main


