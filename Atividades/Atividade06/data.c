#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o elementos da deta em numeros\n");
    
    printf("Qual o dia: ");
    scanf("%d", &dia);
    getchar();

    printf("Qual o mes: ");
    scanf("%d", &mes);
    getchar();

    printf("Qual o ano: ");
    scanf("%d", &ano);
    getchar();
    
    printf("A data no formato brasileiro eh: %d/%d/%d\n", dia, mes, ano);

    printf("A data no formato estado-unidense eh: %d/%d/%d\n", mes, dia, ano);

    return 0;
}