//El siguiente programa muestra el llenado deuna matriz mediante la asignacion
//directa. Todas las variables que componen la matriz tienen el mismo nombre "semana"
//pro diferente indice (el valor del argumento i=0.1.2...7)

#include <stdio.h>

int main(void){

     int semana[8];
     int i=0;

     semana[0]=0;
     semana[1]=1;
     semana[2]=2;
     semana[3]=3;
     semana[4]=4;
     semana[5]=5;
     semana[6]=6;
     semana[7]=7; 

     for(i=1;i<8;i++){
       printf("El valor de la celda %u es %u\n",i,semana[i]);
     }
     
     return 0;
}


