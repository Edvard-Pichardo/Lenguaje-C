#include <stdio.h>

int pow2(int);
int dato=0;

int main(void){

   int result=0;
   int dato=0;
   
   printf("Introduce un entero: ");
   scanf("%i",&dato);     
   result=pow2(dato);
   printf("El resultado es: %i\n",result);
   
   return (0);
}

int pow2(int dato){
   return(dato*dato);

}


