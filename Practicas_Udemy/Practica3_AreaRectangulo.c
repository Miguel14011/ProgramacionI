//Escriba un programa que pida al usuario el valor de la base y la altura de un rectangulo y con ellos calcule su area. A= b x h
#include <stdio.h>

int main(){
    float base, altura;
    printf ("Introduzca la base del triangulo:");
    scanf ("%f", &base);
    printf ("Introduzca la altura del triangulo");
    scanf ("%f", &altura);
    float area= base*altura;
    printf ("El area del rectangulo de base %.2f y altura %.2f es: %.2f", base, altura, area);
}