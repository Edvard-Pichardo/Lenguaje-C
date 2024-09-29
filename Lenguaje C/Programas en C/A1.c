//Este codigo saca el cuadrado de un numero con la funcion pow

#include <stdio.h>
#include <math.h>

int main(void){
     
     int dato=0;
     int result=0;

     printf("Introduce un entero: ");
     scanf("%i",&dato);
     result=pow(dato,2);

     printf("El cuadrado de %i es %i.\n",dato, result);

     return(0);

}


