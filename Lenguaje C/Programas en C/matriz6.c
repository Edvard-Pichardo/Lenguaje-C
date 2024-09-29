#include <stdio.h>

int main(void){
     
     char semana[7]={'l','m','i','j','v','s','d'};
     int i, j, k; 
     char dia; //declaramos el puntero dia

     for(j=0;j<7;j++){
       printf("El dia es %c\n", semana[j]);
      }

     //Ahora se va a guardar en el puntero dia la direccion de la matriz semana
     dia=semana[7];
     
     //Note que en la direcciòn enterior no colocamos eloperador deindicaciòn "&"
     //Vamos a imprimir el contenido de dia
     printf("El puntero dia contiene la direccion: %u\n", dia);
     getchar();
 
     //Ahora vamos a imprimir el resto dedirecciones correspondientes a 
     //los elementos siguientes.
     for(k=1;k<8;k++){
       printf("La direccion %u es %u\n",k+1,(dia+1));
      }

     printf("Cadena %s\n",semana);
    
     return(0);
     getchar();
}


