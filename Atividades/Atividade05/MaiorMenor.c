#include <stdio.h>

int main() {
    int valores[10];
    int maior = 0;
    int menor = 1000;

    for(int i=0; i<10; i++){
        printf("valores(%d) = ", i);
        scanf("%d", &valores[i]);
        if(valores[i]>maior){
            maior=valores[i];
        }
        if(valores[i]<menor){
            menor=valores[i];
        }
    }

    printf("O maior valor eh: %d\n", maior);
    printf("O menor valor eh: %d\n", menor);

    return 0;
}