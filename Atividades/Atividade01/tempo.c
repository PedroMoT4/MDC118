#include <stdio.h>

//Escrever um programa em C que converta um número x de segundos em horas, minutos e segundos.

int main(){

    int opcao;
    int valor;
    float x;

    printf("Qual o valor a ser convertido: ");
    scanf("%d", &valor);
    getchar();

    printf("Conversao segundos x horas: 1\n");
    printf("Conversao horas x segundos: 2\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    getchar();

    if(opcao == 1){
        
        x = valor / 3600;
        x = valor % 3600;
        printf("O numero em horas eh: %.2f\n", x);

    } else if(opcao == 2){

        x = valor * 3600;
        printf("O numero em segudos eh: %f.2\n", x);
    } else {

        printf("Essa opcao eh invalida\n");
    }

    return 0;
}