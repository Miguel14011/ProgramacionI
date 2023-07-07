//Escribe un programa que pida al usuario 3 caracteres y los muestre por consola separados por guiones 
#include <stdio.h>

int main(){
    char c1, c2, c3;

    printf ("Introduce 3 caracteres \n");
    scanf ("%c %c %c",&c1 ,&c2, &c3);
    printf ("%c-%c-%c", c1, c2, c3);

}