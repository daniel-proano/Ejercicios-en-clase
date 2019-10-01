/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>// definicion de biblioteca
#define pi 3.1416// definicion de variable


int main()//definicion de la funcion principal
{
    float radio,area=0;// declaracion de variables
    printf("Ingrese radio:");//impresion en pantalla
    scanf("%f",&radio);//lectura de variable radio
    area=pi*radio*radio;//proceso
    printf("El area es %.1f",area);//salida area circulo

    return 0;
}

