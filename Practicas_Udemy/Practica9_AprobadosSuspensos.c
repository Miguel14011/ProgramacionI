/*Desarollar un programa que solicite la carga de un numero de usuarios. A continuacion, debera pedir las notas de ese numero de 
alumnos,y mostrara por pantalla el numero de alumnos aprobados y suspensos*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, contador_aprobado=0, contador_suspenso=0;
    float nota;

    printf ("Introduce el numero de alumnos\n");
    scanf ("%d",&n);

    for (int i=1; i<=n; i++){
        printf ("Introduce la nota del alumno %d\n",i);
        scanf ("%f",&nota);

        if (nota>=5){
            contador_aprobado++;
        }
        else {
            contador_suspenso++;
        }
    }
    
    printf ("El numero de alumnos aprobados es %d y el numero de alumnos suspensos es %d\n", contador_aprobado, contador_suspenso);

}