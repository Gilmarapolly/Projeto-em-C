#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float nota1, nota2, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
		printf("Digite a Segunda nota: ");
	scanf("%f", &nota2);
	
	media=(nota1+nota2) / 2.0;
	
	if (media == 10)
	printf("Conceito A");
	
	else if (media >= 8)
	printf("Conceito B");
	
	else if (media >= 7)
	printf("Conceito C");
	
		else if (media >= 6)
	printf("Conceito D");
	
		else if (media >= 5)
	printf("Conceito E");
	
	    else 
		printf("Conceito F");
	

	return 0;
} 