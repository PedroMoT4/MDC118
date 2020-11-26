#include <stdio.h>

const int TAMANHO = 10;

int main() {
                    //  0 1 2 3  4 5 6  7 8 9
    //int numeros[TAMANHO];// | | | |55| | | |65| | |
    int numeros[] = {10, 5, 6, 98, -9, 0, 75, 4, 3, 1, 0};//valores iniciais

    numeros[3] = 55;
    numeros[7] = numeros[3] + 10;

    printf("Entre com um numero: ");
    scanf("%d", &numeros[0]);

    printf("%d, %d, %d\n", numeros[0], numeros[3], numeros[7]);

    for(int i=0; i<TAMANHO; i++){
        numeros[i] = i+1;
    }

    for(int i=0; i<TAMANHO; i++){
        printf("%d ", numeros[i]);
    }

    printf("\n");

    for(int i=TAMANHO-1; i>-1; i--){
        printf("%d ", numeros[i]);
    }

    printf("\n");


    return 0;
}