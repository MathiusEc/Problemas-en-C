/*Verificación de palíndromos Pide al usuario que ingrese una número. 
Escribe un programa que determine si es un palíndromo (se lee igual al derecho y al revés). 
Usa un bucle para la comparación dígito a dígito.

Ejemplo: Entrada: "12321" Salida: "Es un palíndromo".

Realizar para cada ejercicio 3 pruebas de escritorio en Excel.*/

#include <stdio.h>
int main(){
    //Entrada
    int num, copia_num, digito, inverso_num;
    inverso_num = 0;

    do{
        printf("\n Dear user, type a positive number: ");
        scanf("%d",&num);
            if(num<1){
                printf("\n remember, only positive numbers");
            }
        copia_num = num;
    }while(num<1);
    
    //Proceso
    while (num>0){
        digito = num%10;
        inverso_num = inverso_num*10+digito;
        num=num/10;
        /*los print es para que vean el proceso para las pruebas de escritorio,
        igual le pueden modificar*/

        printf("\n %10d",inverso_num);
    }

    //Salida
    if(inverso_num == copia_num){
        printf("\n Is a palindromic number ");
    }else{
        printf("\n Is not a palindromic number ");
    }

    printf("\n %d",inverso_num);
    printf("\n %d",copia_num); 

    /*Lo de arriba es para verificar que ambos sean iguales
    el inverso es literal darle la vuelta al numero, ejemplo el 69 cambia a 96
    y se los compara*/
    return 0;
}
