#include <stdio.h>
//Calculadora de quadrados de numeros inteiros
//Condicao para encerramento do programa eh digitar o numero 0

//Funcoes auxiliares
void display();
int leitura();
void square();

int main()
{
    int valor;

    for(display(); valor=leitura(); display())
    {
        square(valor);
    }

    return 0;
} //end main

void display()
{
    printf("Para sair digite 0\n");
    printf("Informe um numero inteiro para calcular o seu quadrado: ");

} //end display

int leitura() //armazenamento do numero inteiro
{
    int t;

    scanf("%d", &t); //leitura do que o usuario digitar
    return t;
} //end leitura

void square(int numero)
{
    printf("%d\n", numero * numero); //imprime o quadrado do numero

} //end square