#include <stdio.h>
//Jogo acerte o valor
int main()
{
    int i;

    for(i=0;i!=12;)
    {
        printf("Digite o numero correto: ");
        scanf("%d",&i);
        getchar();
    }

    return 0;
}