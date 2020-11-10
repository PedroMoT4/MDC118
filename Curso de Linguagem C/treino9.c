#include <stdio.h>
//Comando for e for aninhado
/* 
    for(inicializacao; condicao; incremento);
    {
        comandos;
    }
*/
int main()
{
    int i;
    int j;

    for(i=0;i<10;i++)
    {
        printf("Linha %d\n", i);
        for(j=0;j<5;j++)
        {
            printf("Teste %d\n", j);
        }
    }


    return 0;
}