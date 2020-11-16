#include <stdio.h>

int main()
{

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    getchar();

    if(num%2==0)
    {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}