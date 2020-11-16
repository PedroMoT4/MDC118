#include <stdio.h>
#include <ctype.h>

//Jogo de soma
/*
    comeco:
        comando;
        comando2;
        comando3;
        .
        .
        .
    goto comeco;
*/

int main()
{
    int i=0, j=0, resposta;

    int erros=0, acertos=0;

    inicio:

        for(j=1; j<10; j++)
            {
                printf("Qual a resposta %d + %d?", i, j);
                scanf("%d", &resposta);
                getchar();

                if(resposta != i+j)
                {
                    erros++;
                    printf("Resposta errada!\n");
                }else{
                    acertos++;
                    printf("Resposta certa!\n");
                }

            }//end for
}