//Obtendremos unvector estirado

#include <stdio.h>

int main(void){
     
     float vector[2]={0,0};
     float escalar=0.000;
     float campo[2]={0.000,0.000};

     puts("Escribe el componente x del vector: ");
     scanf("%f", &vector[0]);
     puts("Escribe el componente y del vector: ");
     scanf("%f", &vector[1]);

     printf("El vector introducido es [%g,%g]\n\n",vector[0],vector[1]);

     puts("Escribe, ahora, el factor de estiramiento: ");
     scanf("%f", &escalar);

     campo[0]=escalar*vector[0];
     campo[1]=escalar*vector[1];

     printf("\nEl vector estirado en %g unidades es [%g, %g]\n\n", escalar, campo[0], campo[1]);
     
     puts("Oprime return para salir: ");
     getchar();

     return(0);
}


