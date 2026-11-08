//programa para verificar grau de risco (SE ENCADEADO)

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
	
	} else if (risco != 'B' && risco != 'M' && risco != 'A') {
		printf("Grupo de risco inválido!\n");
		
	} else if (id >= 18 && id <= 24){
		
		if (risco == 'B'){
			gr = 7;
		} else if (risco == 'M'){
			gr = 8;
		} else if (risco == 'A'){
			gr = 9;
		}
	
	} else if (id >= 25 && id <= 40){
		
		if (risco == 'B'){
			gr = 4;
		} else if (risco == 'M'){
			gr = 5;
		} else if (risco == 'A'){
			gr = 6;
		}
	
	} else {
		
		if (risco == 'B'){
			gr = 1;
		} else if (risco == 'M'){
			gr = 2;
		} else if (risco == 'A'){
			gr = 3;
		}
	
	}
	
	if (id >= 18 && id <= 70 && (risco == 'B' || risco == 'M' || risco == 'A')) {
		
		printf("Código do seguro: %d", gr);
	}
	
	return 0;
}