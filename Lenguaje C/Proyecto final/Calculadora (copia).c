#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
int main(){
    int op,ret;
    float num1,num2,r;

    calculadora:
    {
        system("cls");
        pf("Qu%c opcion deseas?\n",201);
        pf("1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n");
        //pf("5)salir\n");
        sf("%i",&op);
        pf("Ingresa valor de n1:\n");
        sf("%f",&num1);
        pf("Ingresa valor de n2:\n");
        sf("%f",&num2);

        switch (op){
        case 1:{
            //system("cls");
            //limpiar pantalla
            r=num1+num2;
            pf("El resultado es %f\n",r);
        }
            break;
            //termina caso
        case 2:{
            //system("cls");
            pf("¿como deseas la resta?\n");
            pf("opcion: 1)n1-n2 o 2)n2-n1\n");
            sf("%i",&op);
            switch(op){
            case 1:{
                r=num1-num2;
                pf("El resultado es %f\n",r);}
                break;
            case 2:{
                r=num2-num1;
                pf("El resultado es %f\n",r);}
                break;
            }
        }
            break;
        case 3:{
            r=num1*num2;
            pf("El resultado es %f\n\n",r);
        }
            break;
        case 4:{
            //system("cls");
            pf("¿como deseas la division?\n");
            pf("opcion: 1)n1/n2 o 2)n2/n1\n");
            sf("%i",&op);
            switch(op){
            case 1:{
                if ((num2<0 || num2>0)){
                r=(num1/num2);
                pf("El resultado es %f\n",r);
                }
                else
                    pf("indeterminado\n");}
                break;
            case 2:{
                if (num1<0 || num1>0){
                r=(num2/num1);
                pf("El resultado es %f\n",r);
                }
                else
                    pf("indeterminado\n");}
                break;}
            }
            break;
        default:
            pf("La opcion ingresada es incorrecta\n");
            break;
        }
        }

        pf("quieres regresar el programa 1)Si 2)No\n");
        sf("%i",&ret);
        if (ret==1)
            goto calculadora;
}
