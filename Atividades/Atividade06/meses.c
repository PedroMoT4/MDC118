#include <stdio.h>

enum meses
{
    janeiro = 1,
    fevereiro = 2,
    marco = 3,
    abril = 4,
    maio = 5,
    junho = 6,
    julho = 7,
    agosto = 8,
    setembro = 9,
    outubro = 10,
    novembro = 11,
    dezembro = 12
};

int main()
{
    int meses;

    printf("Informe o mes: ");
    scanf("%d", &meses);

    if(meses==janeiro|| meses==dezembro){
        printf("O mes digitado eh %d\n", meses);
    }
    return 0;
}