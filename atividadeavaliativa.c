#include <stdio.h>
int main() {
    int idade;
    char sexo;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    if (idade >= 18 && idade <= 30) {
        printf("Você está na faixa etária adequada.\n");
    } else {
        printf("Você não está na faixa etária adequada.\n");
    }
    if (sexo == 'F' || sexo == 'f') {
        printf("Você é do sexo feminino.\n");
    } else {
        printf("Você não é do sexo feminino.\n");
    }
    if (idade > 5) {
        printf("Você tem mais de 5 anos.\n");
    } else {
        printf("Você tem 5 anos ou menos.\n");
    }
}