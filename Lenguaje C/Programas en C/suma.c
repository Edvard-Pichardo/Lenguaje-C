#include <stdio.h>
#include <stdlib.h>

void suma_mat(int a[2][2], int b[2][2], int c[2][2]);
void imprime_mat(int C[2][2]);

int main(int argc, char *argv[]){

    int A[2][2]={
       {1,2},
       {3,4}
                };
    int B[2][2]={
       {2,2},
       {2,2}
                };
    int C[2][2];
   
    printf("Hello, world!\n");
    
    //suma de matrices
    printf("La matriz A es: \n");
    imprime_mat(A);

    printf("La matriz B es: \n");
    imprime_mat(B);

    //imprime la matriz resultante
    printf("La suma es: \n");
    suma_mat(A, B, C);
    imprime_mat(C);
    return EXIT_SUCCESS;

}

void suma_mat(int A[2][2], int B[2][2], int C[2][2]){
  
  int i,j;

  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
     C[i][j]=A[i][j]+B[i][j];
    }
  }
}

void imprime_mat(int C[2][2]){
  int i, j;
  
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
     printf("%d\t", C[i][j]);
    }
  }
printf("\n");
}

//fin de imprime_mat


