#include <stdio.h>

int main()
{
    float n1,n2,n3,n4, media;

    printf("\nDigite a nota 1: ");
    scanf("%f",&n1);
    printf("\nDigite a nota 2: ");
    scanf("%f",&n2);
    printf("\n Digite a nota 3: ");
    scanf("%f",&n3);
    printf("\nDigite a nota 4: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3+ n4)/4;
    printf("\nA media e:%.2f\n", media);
    return(0);
}