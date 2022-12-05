#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i =1, tabuada;
	
	printf ("Digite o valor que voce quer: ");
	scanf("%d", &tabuada);//& é usado para digitar o valor 
	
	while (i<=10){
			
		printf ("%d * %d = %d\n",tabuada, i, i*tabuada);
		
		i++;
	}
	
	return 0;
}