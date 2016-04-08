#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>

int main()
{
    char seguir='s';
    int opcion;
    int flag1erOperando=0;
    int flag2doOperando=0;
    float operandoUno;
    int intoperandoUno;
    float operandoDos;

    do
    {
        system("cls");
        printf("CALCULADORA\n\nSelecciona una opcion del menu:\n\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        while(opcion<1 || opcion>9)
        {
            printf("Error! Ha ingresado una opcion de menu inexistente.\nIngrese una opcion correcta:\n");
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
            case 1:
                system("cls");
                flag1erOperando=1;
                operandoUno = pedirNum();
                intoperandoUno=(int)operandoUno;
                printf("Has elegido el numero: %f \n",operandoUno);
                system("pause");
                break;

            case 2:
                system("cls");
                flag2doOperando=1;
                operandoDos = pedirNum();
                printf("Has elegido el numero: %f \n",operandoDos);
                break;

            case 3:
                if(valOperandos(flag1erOperando,flag2doOperando))
                {
                    system("cls");
                    printf("El resultado de (A+B) es:\n%f \n",suma(operandoUno,operandoDos));
                    system("pause");
                }
                else
                {
                    if(flag1erOperando==0 && flag2doOperando==0)
                    {
                    printf("Debe ingresar los dos operandos para realizar esta operacion \n");
                    system("pause");

                    }
                    else
                    {

                        if(flag1erOperando==1)
                        {
                        printf("Debe ingresar el 2do operando para realizar esta operacion \n");
                        }
                        else
                        {
                        printf("Debe ingresar el 1er operando para realizar esta operacion \n");
                        }
                        system("pause");
                    }

                }
                break;

            case 4:
                if(valOperandos(flag1erOperando,flag2doOperando))
                {
                    system("cls");
                    printf("El resultado de (A-B) es:\n%f \n",resta(operandoUno,operandoDos));
                    system("pause");
                }
                else
                {
                    if(flag1erOperando==0 && flag2doOperando==0)
                    {
                    printf("Debe ingresar los dos operandos para realizar esta operacion \n");
                    system("pause");

                    }
                    else
                    {

                        if(flag1erOperando==1)
                        {
                        printf("Debe ingresar el 2do operando para realizar esta operacion \n");
                        }
                        else
                        {
                        printf("Debe ingresar el 1er operando para realizar esta operacion \n");
                        }
                        system("pause");
                    }

                }
                break;

            case 5:
                if(valOperandos(flag1erOperando,flag2doOperando))
                {
                    system("cls");
                    printf("El resultado de (A/B) es:\n%f \n",division(operandoUno,operandoDos));
                    system("pause");
                }
                else
                {
                    if(flag1erOperando==0 && flag2doOperando==0)
                    {
                    printf("Debe ingresar los dos operandos para realizar esta operacion \n");
                    system("pause");

                    }
                    else
                    {

                        if(flag1erOperando==1)
                        {
                        printf("Debe ingresar el 2do operando para realizar esta operacion \n");
                        }
                        else
                        {
                        printf("Debe ingresar el 1er operando para realizar esta operacion \n");
                        }
                        system("pause");
                    }

                }
                break;

            case 6:
                if(valOperandos(flag1erOperando,flag2doOperando))
                {
                    system("cls");
                    printf("El resultado de (A*B) es:\n%f \n",multiplicacion(operandoUno,operandoDos));
                    system("pause");
                }
                else
                {
                    if(flag1erOperando==0 && flag2doOperando==0)
                    {
                    printf("Debe ingresar los dos operandos para realizar esta operacion \n");
                    system("pause");

                    }
                    else
                    {

                        if(flag1erOperando==1)
                        {
                        printf("Debe ingresar el 2do operando para realizar esta operacion \n");
                        }
                        else
                        {
                        printf("Debe ingresar el 1er operando para realizar esta operacion \n");
                        }
                        system("pause");
                    }

                }
                break;

            case 7:
                if(valOperandoUno(flag1erOperando))
                {
                    if(operandoUno != intoperandoUno || operandoUno<1)
                    {
                        printf("\nError. No se puede realizar el factorial de este numero.\n");
                        system("pause");
                    }
                    else
                    {
                    system("cls");
                    printf("El factorial de (A) es:\n%d \n",factorial(operandoUno));
                    system("pause");
                    }
                }
                else
                    {
                    printf("Debe ingresar el 1er operando (A) para realizar esta operacion \n");
                    system("pause");
                    }
                break;

            case 8:
                if(flag1erOperando==0 && flag2doOperando==0)
                    {
                    printf("Debe ingresar los dos operandos para realizar esta operacion \n");
                    system("pause");

                    }
                    else
                    {
                    system("cls");
                    printf("El resultado de (A+B) es:\n%f \n",suma(operandoUno,operandoDos));
                    printf("El resultado de (A-B) es:\n%f \n",resta(operandoUno,operandoDos));
                    printf("El resultado de (A/B) es:\n%f \n",division(operandoUno,operandoDos));
                    printf("El resultado de (A*B) es:\n%f \n",multiplicacion(operandoUno,operandoDos));
                    if(operandoUno != intoperandoUno || operandoUno<1)
                    {
                        printf("El factorial de (A) es:\nError. No se puede realizar el factorial de este numero.\n");
                    }
                    else
                    {
                    printf("El factorial de (A) es:\n%d \n",factorial(operandoUno));
                    }
                    system("pause");
                    }
                break;

            case 9:
                seguir = 'n';
                break;
        }
    }while(seguir=='s');


    return 0;
}
