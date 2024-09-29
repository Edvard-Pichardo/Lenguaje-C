//Programa paramostrar el llenado porteclado de una matriz

#include <stdio.h>

int main(void){
     
     char semana[7]={'d','l','m','i','j','v','s'}; //matriz a llenar
     int j=0; //contador

     for(j=0;j<7;j++){
       printf("Celda no. %u=%c\n",j,semana[j]);
      }

     

     return(0);
}


