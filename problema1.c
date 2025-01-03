#include <stdio.h>

int main() 
    { 
    int num, ant , suc;
     
    printf("Digite o numero: ");
    scanf ("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("\nO antecessor e: %d\n", ant);
    printf("O sucessor e: %d\n", suc);

    return(0);
    }   
