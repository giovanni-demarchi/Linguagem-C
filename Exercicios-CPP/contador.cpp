//programa para aprender contador e acumulador;

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    
	int num, cont, ac;
	float media;
	char resp;
	
	cont = 0;
	ac = 0;
	resp = 'S';
	
	while (resp == 'S') {
		printf("\nDigite um número: ", num);
		scanf("%d", &num);
		
		cont = cont + 1;
		ac = ac + num;
		
		printf("Continua digitação? S/N\n");
		//scanf(" %c", &resp);
		resp = getche();
		printf("\n");
	}
	
	printf("\n\nQuantidade de números digitados: %d\n", cont);
	media = ac/cont;
	printf("A média dos números é: %.2f\n", media);
	
	return 0;
}