#include <stdio.h>

int main() {
    char resposta;
    
    do {
        printf("Bem-vindo ao nosso mundo!\n");
        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &resposta);  // O espaço antes do %c é para ignorar qualquer caractere de nova linha residual.

    } while (resposta == 's' || resposta == 'S');

    printf("Obrigado por usar o programa!\n");
    return 0;
}
