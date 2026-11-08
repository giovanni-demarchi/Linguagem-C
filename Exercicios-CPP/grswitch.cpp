//programa para verificar grau de risco (CASO/FAÇA)

//ProgramaGR

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

	SetConsoleOutputCP(65001);
    
	int id, gr;
	char risco;
	
	printf("Digite a idade do segurado: ");
	scanf("%d", &id);
	
	printf("Digite o grupo de risco (B, M, A): ");
	scanf(" %c", &risco);
	
	if (id < 18 || id > 70){
		printf("Idade não permitida para seguro.\n");
		return 0;

		} 
		
	switch (risco){
		
		case 'B':
			if (id >= 18 && id <= 24){
				gr = 7;
			} else if (id >= 25 && id <= 40){
				gr = 4;
			} else if (id >= 41 && id <= 70){
				gr = 1;
			}
			break;
		
		case 'M':
			if (id >= 18 && id <= 24){
				gr = 8;
			} else if (id >= 25 && id <= 40){
				gr = 5;
			} else if (id >= 41 && id <= 70){
				gr = 2;
			}
			break;
			
		case 'A':
			if (id >= 18 && id <= 24){
				gr = 9;
			} else if (id >= 25 && id <= 40){
				gr = 6;
			} else if (id >= 41 && id <= 70){
				gr = 3;
			}
			break;
			
		default:
			printf("Grupo de risco inválido!\n");
			return 0;
		
	}
		
	printf("Código do seguro: %d\n", gr);
	
	return 0;
}