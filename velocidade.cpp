//programa para mostrar se o carro está acima da velocidade permitida

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);

    float vel;

    printf("Digite a velocidade: ");
    scanf("%f", &vel);

    if (vel > 80) {
        printf("\nO carro está acima da velocidade permitida!");
    }
    else {
        printf("\nO carro está dentro da velocidade permitida!");
    }

    printf("\n\nPressione qualquer tecla para sair...");
    
    getch();

    return 0;
}