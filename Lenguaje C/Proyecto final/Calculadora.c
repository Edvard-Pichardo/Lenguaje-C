#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pf printf
#define sf scanf


int main(){
    int op, opc, ret, exp;
    float num1,num2,r, pot=1;
    unsigned int i;



    calculadora:
    {
        //system("clear");
        pf("Lista de operaciones: \n");
        pf("1) Suma\n2) Resta\n3) Multiplicaci�n\n4) Divisi�n\n5) Potencia\n6) Ra�z Cuadrada\n7) Salir de la calculadora\n");
        pf("Ingresa la operaci�n deseada. \n");
        sf("%i",&op);

        switch (op){
        case 1:{
            system("clear");
            //limpiar pantalla
            pf("Ha seleccionado la operaci�n suma.\n");
            pf("\vIngresa el primer sumando:\n");
            sf("%f",&num1);
            pf("Ingresa el segundo sumando:\n");
            sf("%f",&num2);
            r=num1+num2;
            pf("\vEl resultado de la suma: es %g\n",r);
        }
            break;
            //termina caso
        case 2:{
            system("clear");
            pf("Ha seleccionado la operaci�n resta.\n");
            pf("Resta: minuendo - sustraendo\n");
            pf("\vIngresa el minuendo:\n");
            sf("%f",&num1);
            pf("Ingresa el sustraendo:\n");
            sf("%f",&num2);
            r=num1-num2;
            pf("\vEl resultado de la resta es: %g\n",r);
        }
            break;
        case 3:{
            system("clear");
            pf("Ha seleccionado la operaci�n producto.\n");
            pf("\vIngresa el primer factor:\n");
            sf("%f",&num1);
            pf("Ingresa el segundo factor:\n");
            sf("%f",&num2);
            r=num1*num2;
            pf("\vEl resultado de la multiplicaci�n es: %g\n",r);
        }
            break;
        case 4:{
            system("clear");
            pf("Ha seleccionado la operaci�n divisi�n.\n");
            pf("Divisi�n: dividendo/divisor\n");
            pf("\vIngresa el dividendo:\n");
            sf("%f",&num1);
            pf("Ingresa el divisor:\n");
            sf("%f",&num2);
            if(num2==0){ 
            pf("\vNo se puede dividir entre 0.\n");
            }
            else{ 
            r=num1/num2;
            pf("\vEl resultado de la divisi�n es: %g\n",r);
            }
        }
            break;
        case 5:{
            system("clear");
            pf("Ha seleccionado la operaci�n potencia.\n");
            pf("\vIngresa la base de la potencia:\n");
            sf("%f",&num1);
            pf("Ingresa el exponente de la potencia:\n");
            sf("%i",&exp);
            for(i=1;i<=exp;i++){
            pot=pot*num1; 
            }
            pf("\vEl resultado de la potencia es: %g\n",pot);
        }
            break;
        case 6:{
            system("clear");
            pf("Ha seleccionado la operaci�n ra�z cuadrada.\n");
            pf("Ingresa el n�mero al que se le quiera sacar la ra�z:\n");
            sf("%f",&num1);
            if(num1<0){ 
            pf("\vEn los n�meros reales no existe la ra�z cuadrada de n�meros negativos.\n");
            }
            else{
            r=sqrt(num1);
            pf("\vEl resultado de la ra�z cuadrada es: %g\n",r);
            }   
        }
            break;
        case 7:{
            pf("\vAdios, esperamos que vuelva pronto!\n");
            return 0;               
        }
            break;
        default:{
            system("clear");
            pf("La opci�n ingresada es incorrecta, seleccione una nueva. \n\v");
            goto calculadora;
        }
            break;
        }

        pf("\vDesea salir de la calculadora?\n");
        pf("1) S�\n2) No\n");
        sf("%i",&opc);

        switch (opc){
        case 1:{
            pf("\vAdios, esperamos que vuelva pronto!\n");
            return 0;
        }
            break;
        case 2:{
            system("clear");
            goto calculadora;
        }
            break;
       }
        
  }
}
