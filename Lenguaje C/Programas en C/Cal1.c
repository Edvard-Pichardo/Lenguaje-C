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
        pf("1) Suma\n2) Resta\n3) Multiplicaci�n\n4) Divisi�n\n5) Potencia\n6) Ra�z Cuadrada\n");
        pf("Ingresa la operaci�n deseada. \n");
        sf("%i",&op);

        switch (op){
        case 1:{
            system("clear");
            //limpiar pantalla
            pf("Ha seleccionado la operaci�n suma.\n");
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
            pf("Ha seleccionado la operaci�n resta.\n");
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
            pf("Ha seleccionado la operaci�n producto.\n");
            pf("Ingresa el primer factor:\n");
            sf("%f",&num1);
            pf("Ingresa el segundo factor:\n");
            sf("%f",&num2);
            r=num1*num2;
            system("clear");
            pf("El resultado de la multiplicaci�n es: %f\n",r);
        }
            break;
        case 4:{
            system("clear");
            pf("Ha seleccionado la operaci�n divisi�n.\n");
            pf("Divisi�n: dividendo/divisor\n");
            pf("Ingresa el dividendo:\n");
            sf("%f",&num1);
            pf("Ingresa el divisor:\n");
            sf("%f",&num2);
            r=num1/num2;
            system("clear");
            pf("El resultado de la divisi�n es: %f\n",r);
        }
            break;
        case 5:{
            system("clear");
            pf("Ha seleccionado la operaci�n potencia.\n");
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
            pf("Ha seleccionado la operaci�n ra�z cuadrada.\n");
            pf("Ingresa el n�mero al que se le quiera sacar la ra�z:\n");
            sf("%f",&num1);
            r=sqrt(num1);
            system("clear");
            pf("El resultado de la ra�z cuadrada es: %f\n",r);   
        }
            break;
        default:
            pf("La opci�n ingresada es incorrecta, seleccione una nueva. \n");
            goto calculadora;
            break;
        }
        return 0;
       }
        

}
