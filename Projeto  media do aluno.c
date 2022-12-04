#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	//declaração das variaveis 
	
	float nota1, nota2, media;
	char nome;
	
	//entrada de dados
	printf ("Digite a primeira nota do aluno: ");
	scanf ("%f",&nota1); //armazena  
	
	printf ("Digite a segunda nota do aluno: ");
	scanf ("%f", &nota2);
	
	//processamento da nota
	media = (nota1 + nota2) /2;
	
	//saida
	printf("Media do aluno = %.1f\n", media); // printf da média usamos %.1f para mostrar a média com apenas uma casa decimal.
	
	// pausa da tela
	system("pause"); 

	return 0; //retonar a main
  
}