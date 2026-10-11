//programa para mostrar o valor a ser pago por quilowatts consumidos e o valor com desconto

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(void) {
	SetConsoleOutputCP (65001);
	
	float salMin, kw, kwconsu, valorPag, valorPagDesc;
	const float desc = 0.85;
	
	printf("Informe o salário mínimo: ");
	scanf("%f", &salMin);
	fflush(stdin);
	
	printf("Informe o consumo da residência: ");
	scanf("%f", &kwconsu);
	fflush(stdin);
	
	kw = 0.80;
	valorPag = kw*kwconsu;
	valorPagDesc = valorPag*desc;	
	
	printf("O valor de cada quilowatts é: %.2f\n", kw);
	printf("O valor a ser pago é: R$%.2f\n", valorPag);
	printf("O valor a ser pago com desconto é: R$%.2f", valorPagDesc);
	getch();

	return 0;
}