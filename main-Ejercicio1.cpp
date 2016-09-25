#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int A, B;
	
	printf ("Ejercicio 1:\nCrear un programa que lea dos numeros y que indique el mayor de los dos.");
	printf ("\n------------------------------------------------------------------------------");
	
	printf ("\n\nEscribe el primer numero :");
	scanf ("%d",&A);
	
	printf ("\nEscribe el segundo numero :");
	scanf ("%d",&B);
	
	if (A > B){
		printf ("\n\nEl Numero Mayor es :%d",A);
	}else{
		printf ("\n\nEl Numero Mayor es :%d",B);
	}
	
	getch();
	return 0;
}
