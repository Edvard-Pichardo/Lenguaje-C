#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pf printf
#define sf scanf


int main(){
    int op,ret,i, exp;
    float num1,num2,r, pot=1;



    calculadora:
    {
        system("clear");
        pf("Lista de operaciones: \n");
        pf("1) Suma\n2) Resta\n3) Multiplicación\n4) División\n5) Potencia\n6) Raíz Cuadrada\n");
        pf("Ingresa la operación deseada. \n");
        sf("%i",&op);

        switch (op){
        case 1:{
            system("clear");
            //limpiar pantalla
            pf("Ha seleccionado la operación suma.\n");
            pf("Ingresa el primer sumando:\n");
            sf("%f",&num1);
            pf("Ingresa el segundo sumando:\n");
            sf("%f",&num2);
            r=num1+num2;
            system("clear");
            pf("El resultado de la suma: es %f\n",r);
        }
            break;
            //termina caso
        case 2:{
            system("clear");
            pf("Ha seleccionado la operación resta.\n");
            pf("Resta: minuendo - sustraendo\n");
            pf("Ingresa el minuendo:\n");
            sf("%f",&num1);
            pf("Ingresa el sustraendo:\n");
            sf("%f",&num2);
            r=num1-num2;
            system("clear");
            pf("El resultado de la resta es: %f\n",r);
        }
            break;
        case 3:{
            system("clear");
            pf("Ha seleccionado la operación producto.\n");
            pf("Ingresa el primer factor:\n");
            sf("%f",&num1);
            pf("Ingresa el segundo factor:\n");
            sf("%f",&num2);
            r=num1*num2;
            system("clear");
            pf("El resultado de la multiplicación es: %f\n",r);
        }
            break;
        case 4:{
            system("clear");
            pf("Ha seleccionado la operación división.\n");
            pf("División: dividendo/divisor\n");
            pf("Ingresa el dividendo:\n");
            sf("%f",&num1);
            pf("Ingresa el divisor:\n");
            sf("%f",&num2);
            r=num1/num2;
            system("clear");
            pf("El resultado de la división es: %f\n",r);
        }
            break;
        case 5:{
            system("clear");
            pf("Ha seleccionado la operación potencia.\n");
            pf("Ingresa la base de la potencia:\n");
            sf("%f",&num1);
            pf("Ingresa el exponente de la potencia:\n");
            sf("%i",&exp);
            for(i=1;i<=exp;i++){
            pot=pot*num1; 
            }
            system("clear");
            pf("El resultado de la potencia es: %f\n",pot);
        }
            break;
        case 6:{
            system("clear");
            pf("Ha seleccionado la operación raíz cuadrada.\n");
            pf("Ingresa el número al que se le quiera sacar la raíz:\n");
            sf("%f",&num1);
            r=sqrt(num1);
            system("clear");
            pf("El resultado de la raíz cuadrada es: %f\n",r);   
        }
            break;
        default:
            pf("La opción ingresada es incorrecta, seleccione una nueva. \n");
            goto calculadora;
            break;
        }
        return 0;
       }
        

}
