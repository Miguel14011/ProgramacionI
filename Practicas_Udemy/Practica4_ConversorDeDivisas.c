/*Escriba un programa que realice la conversion euros a pesetas. Para ello, pedira al usuario que introduzca los euros a convertir
y mostrara por consola la equivalencia en pesetas de dicha cantidad*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float euros;
    printf ("Introduce los euros que quieres convertir\n");
    scanf ("%f",&euros);
    //pecetas = euros * 166.86
    printf ("%.2f euros equivalen a %.2f pecetas", euros, euros * 166.386 );

}