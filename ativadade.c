#include <stdio.h>

int main() {
    int num;
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    while (num <= 0) {
        printf("Número inválido. Digite um número positivo: ");
        scanf("%d", &num);
    }

    printf("Você digitou um número positivo: %d\n", num);
    return 0;
}
