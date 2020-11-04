#include <stdio.h>

//Escrever um programa em C que converta um número x de segundos em horas, minutos e segundos.

int main(){

    int opcao;
    float valor;
    float x;

    printf("Qual o valor (em segundos) a ser convertido: ");
    scanf("%f", &valor);
    getchar();

    printf("Conversao segundos x horas: 1\n");
    printf("Conversao segundos x minutos: 2\n");
    printf("Conversao segundos x segundos: 3\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    getchar();

    if(opcao == 1){
        
        x = valor / 3600;
        printf("O numero em horas eh: %.4f\n", x);

    } else if(opcao == 2){

        x = valor / 60;
        printf("O numero em minutos eh: %f\n", x);

    } else if(opcao == 3) {

         x = valor * 3600;
        printf("O numero em segundos eh: %f\n", x);
        
    } else {

        printf("Essa opcao eh invalida");
        
    }

    return 0;
}