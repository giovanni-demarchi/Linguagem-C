//programa saldo da aplicação

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(void) {
	SetConsoleOutputCP (65001);
	
	float rend, saldo, taxa;
	
	printf("Digite o saldo: ");
	scanf("%f", &saldo);
	fflush(stdin);
	printf("Informe a taxa: ");
	scanf("%f", &taxa);
	fflush(stdin);
	
	rend = saldo*(taxa/100);
	saldo = ((taxa/100)+1)*saldo;
	
	printf("\nO valor do rendimento é: %.2f", rend);
	printf("\nO valor do saldo após a aplicação é: %.2f\n\n", saldo);
	getch();

	return 0;
}