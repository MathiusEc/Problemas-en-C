#include <stdio.h>

/****** 
Realizar un programa en C que permita acertar la edad de Matusalen(969)
el programa debe indicar si es la respuesta correcta, caso contrario indicar si es menor o mayor.

Se debe permitir solo 3 intentos, si acierta dentro de los 3 intentos debe terminar el programa.

Al final del programa si no acertó se debe desplegar un mensaje de que lo intente nuevamente.
Si dice si, se debe permitir repetir el programa.
******/

int main(){

    int intentos, respuesta;
    char opci;

    do{
        printf("\nDear user, please enter Methuselah's age, remember you only have 3 attempts:");
        scanf("%d", &respuesta);
        if(respuesta<0){
        printf("\nPlease, enter a number in a valid range\n");
        }
    }while(respuesta<0);

    intentos=1;
    do{
        if(respuesta==969){
            printf("Congrats!! %d is the correct answer!", respuesta);
        }else{
            if(respuesta<969){
                printf("\nThe Methuselah's age is higher\n");
                scanf("%d", &respuesta);
                intentos++;
            }else{
                printf("\nThe Methuselah's age is lower\n");
                scanf("%d", &respuesta);
                intentos++;
            }
             if(respuesta==969){
                printf("Congrats!! %d is the correct answer!", respuesta);
            }
        }

    }while(intentos<3 && respuesta!=969);
    


    return 0;
}