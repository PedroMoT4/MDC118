#include <stdio.h>
#include <stdlib.h>

// 0 - x - RAND_MAX
// 0 - y - 10
// x/y = RAND_MAX - x / 10 - y => x * (10 - y) = y * (RAND_MAX - x)
//10 * x - x * y = RAND_MAX * y - x * y
//10 * x = RAND_MAX * y
//10 * x / RAND_MAX = y

int main() {

    float notas[15][2];
    float medias[15];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            //notas[i][j] = rand()*10.0f/RAND_MAX; //Numero aleatorio entre 0 e RAND_MAX porem as notas vao de 0 a 10
            printf("notas(%d,%d) = ", i, j);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("  A1    A2   Media\n");

    for(int i=0; i<4; i++)
    {
        float soma = 0;
        for(int j=0; j<2; j++)
        {
            soma = soma + notas[i][j];
            printf("%5.1f", notas[i][j]);
        }
        medias[i] = soma/2;
        printf("%5.1f\n", medias[i]);
    }
    printf("\n");

return 0;
}