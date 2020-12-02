#include <stdio.h>
#include <string.h>

struct endereco_t 
{
    char logradouro[30];
    unsigned short int numero; //0 => 65000
    unsigned int cep;
    char bairro[15];
};

struct contato_t
{ 
    char nome[30];
    unsigned int telefone;
    struct endereco_t endereco;
};

//struct
//{
//    char logradouro[30];
//    unsigned short int numero; //0 => 65000
//    unsigned int cep;
//    char bairro[15];
//} endereco1, endereco2;

//struct endereco
//{
//    char logradouro[30];
//    unsigned short int num        A   ero; //0 => 65000
//    unsigned int cep;
//    char bairro[15];
//} endereco1, endereco2;

int main()
{
    // Matriz guarda valores do mesmo tipo
    // Endereco => cep, bairro, numero da rua
    //struct endereco_t meu_endereco;

    //printf("Entre com logradouro: ");
    //scanf("%[^\n]s", meu_endereco.logradouro);
    //printf("Entre com numero: ");
    //scanf("%hd", &meu_endereco.numero);
    //printf("Entre com cep: ");
    //scanf("%ui", &meu_endereco.cep);
    //getchar();
    //printf("Entre com bairro: ");
    //scanf("%[^\n]s", meu_endereco.bairro);

    //printf("/nMeu endereco\n");
    //printf("%s %d - CEP %u - %s\n", 
    //meu_endereco.logradouro,
    //meu_endereco.numero,
    //meu_endereco.cep,
    //meu_endereco.bairro
    //);

    struct contato_t meu_contato;

    printf("Entre com o nome do contato: ");
    scanf("%[^\n]s", meu_contato.nome);
    printf("Entre o telefone do contato: ");
    scanf("%ui", &meu_contato.telefone);
    getchar();
    printf("Entre com logradouro: ");
    scanf("%[^\n]s", meu_contato.endereco.logradouro);
    printf("Entre com numero: ");
    scanf("%hd", &meu_contato.endereco.numero);
    printf("Entre com cep: ");
    scanf("%ui", &meu_contato.endereco.cep);
    getchar();
    printf("Entre com bairro: ");
    scanf("%[^\n]s", meu_contato.endereco.bairro);

    printf("\nMeu contato\n");
    printf("%s\nTelefone %u\nEndereco %s %d - CEP %u - %s\n",
    meu_contato.nome,
    meu_contato.telefone, 
    meu_contato.endereco.logradouro,
    meu_contato.endereco.numero,
    meu_contato.endereco.cep,
    meu_contato.endereco.bairro
    );

    // Lista enderecos - matriz
    //char matriz_logradouro[10][30];
    //unsigned short int matriz_numero[10];
    //unsigned int matriz_cep[10];
    //char matriz_bairro[10][15];

    //for (int i=0; i<10; i++)
    //{
    //    strcpy(matriz_logradouro[i], 'SGAS');
    //    matriz_numero[i] = 612;
    //    matriz_cep[i] = 70000000;
    //   strcpy(matriz_bairro[i], 'ASA SUL');
    //}

    return 0;
}