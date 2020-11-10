#include <stdio.h>
//Declaracao switch (muitos testes DE IGUALDADE a serem feitos)
//Testes de comparacao sao melhores com a declaracao if
/*
switch(variavel)
{  
    case constante1:
        comandos;
        break;
    case constante2:
        comandos;
        break;
    .
    .
    .
    default:
        comandos;
}
*/ 
//COnversor de decimal para hexadecimal e vice-versa
int main()
{
    int opcao;
    int valor;

    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");
    printf("Informe sua opcao: ");
    scanf("%d", &opcao);
    getchar();

    switch(opcao)
    {
        case 1:
            printf("Informe o valor em decimal: ");
            scanf("%d", &valor);
            getchar();
            printf("%d em hexadecimal eh %x\n", valor,valor);
            break;
        case 2:
            printf("Informe o valor em hexadecimal: ");
            scanf("%x", &valor);
            getchar();
            printf("%x em decimal eh %d\n", valor, valor);
            break;
        default:
            printf("Essa opcao eh invalida\n");
    }

    return 0;
}