#include <stdio.h>

int main(void){

     int termina='9';
     
     while(termina != '0'){
       printf("Introduce un número: ");
       termina=getchar();

       if(termina != '0') {
         printf("Haz escogido continuar\n");
       }
       else {
         printf("Haz escogido terminar\n");
       }
     }
     
     return 0;
}


