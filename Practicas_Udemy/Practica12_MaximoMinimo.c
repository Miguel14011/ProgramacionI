//Escribir un programa que dado un vector de enteros de 10 elementos, muestre el valor maximo y minimo
#include <stdio.h>

int main(){
    int numeros[10]={4,7,9,75,-5,6,12,-18,0,1};
    int maximo = numeros[0];
    int minimo = numeros[0];

    for (int i=1; i<10; i++){
        if (numeros[i]>maximo){
            maximo = numeros[i];
        }
        if (numeros[i]<minimo){
            minimo=numeros[i];
        }
    }

    printf ("El valor maximo: %d\nValor minimo: %d",maximo, minimo);
}