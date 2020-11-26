#include <stdio.h>

// sintaxe de funcao
// tipo_retorno nome_funcao(lista de argumentos)

int somar (int a, int b)
{
    return a + b;
}

int elevar (int x, int y)
{
    int p = 1;
    for(int i=0; i<y; i++) {
        p = x * p;
    }
    return p;
}

int main()
{
    somar(10,20);
    printf("%d\n", elevar(2,7));
    return 0;
}