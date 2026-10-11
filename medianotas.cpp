//programa para mostrar a media de 3 notas

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota: \n");
	fflush(stdin);
	scanf("%f",&n1);
	printf("Digite a segunda nota: \n");
	fflush(stdin);
	scanf("%f",&n2);
	printf("Digite a terceira nota: \n");
	fflush(stdin);
	scanf("%f",&n3);
	
	media = (n1+n2+n3)/3;
	
	printf("\nA media e: %5.2f \n", media);
	system("pause");
}