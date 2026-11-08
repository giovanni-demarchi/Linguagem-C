//programa para realizar cálculos

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
	
	if (scanf("%f %f %c",&valor1,&valor2,&oper) !=3){
		printf("Entrada inválida, digite dois valores.\n");
		return 1;
	}
	
	if (oper == '+') {
		soma = valor1 + valor2;
		printf("Soma dos valores é: %.2f", soma);
		
	} else if (oper == '-'){
			sub = valor1 - valor2;
			printf("Subtração dos valores é: %.2f", sub);
			
	} else if (oper == '/'){
		if(valor2 == 0){
			printf("Não é possível divisão por 0.\n");
		}
		else {
			
			div = valor1 / valor2;
			
			printf("Divisão dos valores é: %.2f", div);
		}
 	} else if (oper == '*') {
        mult = valor1 * valor2;
        printf("Multiplicação dos valores é: %.2f", mult);

    } else {
        printf("Operação inválida!\n");
    }
	
	return 0;
}