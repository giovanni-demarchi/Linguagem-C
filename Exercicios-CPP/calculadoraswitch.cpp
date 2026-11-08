//programa para realizar cálculos (CASO/FAÇA)

//ProgramaCalculadora

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

	SetConsoleOutputCP(65001);
    
	float valor1, valor2, soma, sub, div, mult;
	char oper;
	
	printf("Digite o primeiro e segundo valor e a operação desejada: \n");
	scanf("%f %f %c",&valor1,&valor2,&oper);
	
		switch(oper){
			case '+':
				soma = valor1 + valor2;
				printf("Soma dos valores é: %.2f", soma);
				break;
		
			case '-':
				sub = valor1 - valor2;
				printf("Subtração dos valores é: %.2f", sub);
				break;

			case '/':
				if(valor2 == 0){
					printf("Não é possível divisão por 0.\n");
				}
				else {			
					div = valor1 / valor2;
					printf("Divisão dos valores é: %.2f", div);
				}
				break;
 		
			case '*':
        		mult = valor1 * valor2;
        		printf("Multiplicação dos valores é: %.2f", mult);
        		break;

    		default:
        		printf("Operação inválida!\n");
    	}
	
	return 0;
	
}