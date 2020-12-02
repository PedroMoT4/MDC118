#include <stdio.h>

const int DOMINGO = 1;
const int SEGUNDA = 2;
const int TERCA = 3;
const int QUARTA = 4;
const int QUINTA = 5;
const int SEXTA = 6;
const int SABADO = 7;

// Comeca pelo 0
enum dias {dom, seg, ter, qua, qui, sex, sab};

enum genero
{
    masculino = 1,
    feminino = 2
};

enum status
{
    ativo = 1,
    inativo = 0
};

int main(){

    int dia_da_semana;

    printf("Informe o dia da semana: ");
    scanf("%d", &dia_da_semana);

    if(dia_da_semana==DOMINGO || dia_da_semana==SABADO)
    {
        printf("Nao eh dia util\n");
    } else {
        printf("Eh dia util\n");
    }


    return 0;
}