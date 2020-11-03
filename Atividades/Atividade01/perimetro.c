#include <stdio.h>

//Escrever um programa em C que calcule o perímetro de uma circunferência (p = 2 x pi x raio, considerendo pi = 3.1416)

int main(){
    float pi = 3.1416;
    int raio;

    printf("Digite o valor do raio: ");
    scanf("%d", &raio);
    getchar();

    float p = 2 * pi * raio;

    printf("O perimetro eh: %f\n", p);

    return 0;
}