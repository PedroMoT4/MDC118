#include <stdio.h>

//Escrever um programa em C que converta um valor em Gigabytes em bytes (1Gb = 1024^3 bytes).

int main(){
    int memoria;
    int x;

    printf("Digite o tamanho do seu arquivo em GB: ");
    scanf("%d", &memoria);
    getchar();

    x = memoria * (1024 * 1024 * 1024);
    
    printf("A memoria do seu arquivo em bytes eh: %d\n", x);
    
    return 0;
}