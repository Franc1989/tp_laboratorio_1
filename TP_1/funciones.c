#include <stdio.h>

float pedirNum(void)
{
    float numUsuario;

    printf("Ingrese un Numero: \n");
    scanf("%f",&numUsuario);

    return numUsuario;
}

float suma(float x, float y)
{
    float resultadoSum=x+y;
    return resultadoSum;
}

int valOperandos(int x,int y)
{
    int esValido=0;
    if (x==1 && y==1)
    {
        esValido=1;
    }
    return esValido;
}

float resta(float x, float y)
{
    float resultadoResta=x-y;
    return resultadoResta;
}

float multiplicacion(float x, float y)
{
    float resultadoMulti=x*y;
    return resultadoMulti;
}

float division(float x, float y)
{
    float resultadoDivi=x/y;
    return resultadoDivi;
}

int factorial(float x)
{
    int factorial=1;
    int num=x;
    int i;

    for(i=num;i>=1;i--)
    {
        factorial=factorial*i;
    }
    return factorial;
}

int valOperandoUno(int x)
{
    int esValido=0;
    if (x==1)
    {
        esValido=1;
    }
    return esValido;
}

