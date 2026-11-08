#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){
	char nome [30];
	// usando scanf
	printf("Entre com seu nome: ");
	fflush(stdin);
	scanf("%s",nome);
	printf("Oi %s!\n", nome);

	// usando gets
	printf("Entre com seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("Oi %s!\n", nome);
	
	// usando getchar
	char car, ch;
	printf("Digite um caractere: ");
	fflush(stdin);
	car = getchar();
	printf("O caractere digitado = %c \n", car);
	
	// usando getche
	printf("Digite um caractere: ");
	fflush(stdin);
	ch = getche();
	printf("\nO caractere digitado = %c \n", ch);
	
	getch();
}