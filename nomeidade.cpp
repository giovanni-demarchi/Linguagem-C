//programa para mostrar nome e idade do usuario

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){
	char nome [25];
	int idade;
	printf("Entre com seu nome: ");
	fflush(stdin);
	scanf("%s", nome);
	printf("Entre com sua idade: ");
	fflush(stdin);
	scanf("%d", &idade);
	printf("\nOla %s, voce tem %d anos!\n\n", nome, idade);
	getch();
}