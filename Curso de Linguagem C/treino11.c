#include <stdio.h>
//Mais aplicacoes para o laco for
//for com mais de uma variavel
//Imprimir o numeros pares de 0 a 100

int main()
{
    int i, j;

    for(i=0,j=0; i+j<=100; i++,j++)
    {
        printf("%d\n", i+j);
    }

    return 0;
}