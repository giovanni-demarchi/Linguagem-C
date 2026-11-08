//programa para verificar triangulos

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    
	float x, y, z;
	
	printf("Digite os valores de X, Y, Z: \n");
	
	if (scanf("%f %f %f",&x,&y,&z) !=3){
		printf("Entrada inválida, digite tres valores.\n");
		return 1;
	}
	
	if (x>0 && y>0 && z>0 && x<y+z && y<x+z && z<x+y) {
		
		if(x==y && y==z){
			printf("Triângulo Equilatero.\n");
		} else if (x==y || x==z || y==z){
			printf("Triângulo Isósceles.\n");
		} else {
			printf("Triângulo escaleno.\n");
		}
		
	} else {
			printf("\nNão é um triângulo!\n\n\n");
		}
	
	return 0;
}