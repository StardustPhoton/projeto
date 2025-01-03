/*Estrutura condicional simples em C*/
/*Incluíndo o conteúdo de stdio.h*/
             #include <stdio.h>
/*Insere o conteúdo do arquivo match, que tem a função sqrt, cálculo da raiz quadrada*/
            #include <math.h>  

/*todo programa em C deve possuir essa linha*/
                int main()
{ /*delimita o início das instruções*/
                int num;
                float raiz;

printf("\nDigite um número inteiro:");
    scanf("%d", &num);
    if (num %2 == 0)
            {
    raiz = sqrt(num);
    printf("\nA raiz quadrada é:%3f",raiz);            
            }
    return (0); /*Returno sem erro*/

}/*fim do conjunto de instruções da função main*/
