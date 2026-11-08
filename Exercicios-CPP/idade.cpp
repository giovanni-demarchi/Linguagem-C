//programa para verificar idade das pessoas entre 15 e 24

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);

    int idade, cont, ac, n;

    cont = 0;
    ac = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    while (cont < n) {

        printf("Digite a idade: ");
        scanf("%d", &idade);

        cont = cont + 1;

        if (idade >= 15 && idade <= 24) {
            ac = ac + 1;
        }
    }

    printf("\nQuantidade de pessoas entre 15 e 24 anos: %d\n", ac);

    return 0;
}
