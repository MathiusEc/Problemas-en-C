#include <stdio.h>

int main(){

    /*Escribe un programa que permita al usuario ingresar una cantidad indeterminada de números.
    El programa debe detenerse cuando el usuario ingrese 0 y, al final, mostrar el número mayor ingresado*/

    int numero,num_mayor;
    num_mayor=0;
    printf("Enter the 0 for close the program..");
    do{
        printf("\nDear user, please enter the numbers and I will tell you which number is the bigger:");
        scanf("%d", &numero);

        if(numero>num_mayor){
            num_mayor=numero;
        }

    }while(numero!=0);

    printf("The bigger number is %d", num_mayor);


   
    return 0;
}