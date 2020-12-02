#include <stdio.h>
struct contato_t{
    char nome[30];
    int telefone;
};

int main()
{
    struct contato_t contatos[10];

    for(int i=0; i<10; i++)
    {
        printf("Nome do contato %d: \n", i+1);
        scanf("%[^\n]s", contatos[i].nome);
        getchar();
    }

    for(int i=0; i<10; i++)
    {
        printf("Telefone do Contato %s: \n", contatos[i].nome);
        scanf("%d", &contatos[i].telefone);
        getchar();
    }

    printf("-----Lista de Contatos-----\n\n");
    
    for(int i; i<10; i++)
    {
        printf("%s - %d\n",
        contatos[i].nome,
        contatos[i].telefone);
        printf("\n");
    }

    printf("------FIM DA LISTA------");

    return 0;
}