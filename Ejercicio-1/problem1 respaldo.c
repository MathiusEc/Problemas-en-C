#include <stdio.h>

/******
Realizar un programa en C que permita acertar la edad de Matusalen(969)
el programa debe indicar si es la respuesta correcta, caso contrario indicar si es menor o mayor.

Se debe permitir solo 3 intentos, si acierta dentro de los 3 intentos debe terminar el programa.

Al final del programa si no acertC3 se debe desplegar un mensaje de que lo intente nuevamente.
Si dice si, se debe permitir repetir el programa.
******/

int main() {

	int respuesta, intentos;
	char opci;

	do {

		do {
			printf("\nDear user, please enter Methuselah's age, remember you only have 3 attempts:\n");
			scanf("%d", &respuesta);
			if(respuesta<0) {
				printf("\nPlease, enter a number in a valid range\n");
			}
		} while(respuesta<0);

		if(respuesta==969) {
			printf("\nCongrats!! You won. 969 is the correct answer");
			opci=('N' && 'n');
		} else {
			intentos=1;
			do {
				printf("Incorect! Try again..\n");
				if(respuesta<969) {
					printf("\nThe Methuselah's age is higher\n");
				} else {
					printf("\nThe Methuselah's age is lower\n");
				}
				scanf("%d", &respuesta);
				intentos++;
			} while(respuesta!=969 && intentos!=3);
			if(respuesta==969) {
				printf("\nCongrats!! You won. 969 is the correct answer\n");
				opci=('N' && 'n');
			} else {
				printf("Sorry, you lose because you did not answer in 3 attemps :c\n");
				do {
					printf("\nDo you want to play again? Y/N\n");
					scanf(" %c", &opci);
				} while(opci!='N' && opci!='n'  && opci!='y' && opci!='Y');

			}

		}
	
	}	while(opci=='y' || opci=='Y');
	return 0;
}
