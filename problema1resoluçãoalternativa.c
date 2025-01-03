#include <stdio.h>

int main()
{
    int num;

    printf("Digie o número: ");
    scanf("%d",&num);
    printf("\nO antecessor e: %d", num-1);
    printf("\nO sucessor e:%d", num+1);
    return(0);
}