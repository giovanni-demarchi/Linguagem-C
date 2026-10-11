//programa para verificar se dois números são iguais

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    
	float n1, n2;
	
	printf("Digite o primeiro número: \n");
	fflush(stdin);
	scanf("%f",&n1);
	printf("Digite o segundo número: \n");
	fflush(stdin);
	scanf("%f",&n2);
	
	if (n1 == n2) {
		printf("\nOs números são iguais!\n\n\n");
	}
	
	else {
		printf("\nOs números são diferentes!\n\n\n");
	}
	
	system("pause");
	return 0;
}