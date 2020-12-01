#include <stdio.h>
#include <string.h>

int main() {
 
    char caracteres[80];
    int tamanho, contrario;

    printf("Digite alguma coisa em ate 80 caracteres: ");
    scanf("%[^\n]s", caracteres);

    tamanho=strlen(caracteres);

    for (contrario=tamanho; contrario>-1; contrario--)
    {
        printf("%c", caracteres[contrario]);
    }

    printf("\n");


    return 0;
}