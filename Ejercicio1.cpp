#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int A, B;
	
	printf ("Ejercicio 1:\nCrear un Programa que lea dos numeros y que indique el MAYOR de los dos.");
	printf ("\n------------------------------------------------------------------------------");
	
	printf ("\n\nEscribe el Primer Numero :");
	scanf ("%d",&A);
	
	printf ("\nEscribe el Segundo Numero :");
	scanf ("%d",&B);
	
	if (A > B){
		printf ("\n\nEl Numero MAYOR es :%d",A);
	}else{
		printf ("\n\nEl Numero MAYOR es :%d",B);
	}
	
	getch();
	return 0;
}
