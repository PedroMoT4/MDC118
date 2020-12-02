#include <stdio.h>

enum meses
{
    janeiro,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
};

int main()
{
    for(int i=0; i<12;i++)
    {
        if(i == janeiro)
        {
            printf("Janeiro = 1");
            printf("\n");
        }
        if(i == fevereiro)
        {
            printf("Fevereiro = 2");
            printf("\n");
        }
        if(i == marco)
        {
            printf("Marco = 3");
            printf("\n");
        }
        if(i == abril)
        {
            printf("Abril = 4");
            printf("\n");
        }
        if(i == maio)
        {
            printf("Maio = 5");
            printf("\n");
        }
        if(i == junho)
        {
            printf("Junho = 6");
            printf("\n");
        }
        if(i == julho)
        {
            printf("Julho = 7");
            printf("\n");
        }
        if(i == agosto)
        {
            printf("Agosto = 8");
            printf("\n");
        }
        if(i == setembro)
        {
            printf("Setembro = 9");
            printf("\n");
        }
        if(i == outubro)
        {
            printf("Outubro = 10");
            printf("\n");
        }
        if(i == novembro)
        {
            printf("Novembro = 11");
            printf("\n");
        }
        if(i == dezembro)
        {
            printf("Dezembro = 12");
            printf("\n");
        }
    }


    return 0;
}