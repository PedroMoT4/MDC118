#include <stdio.h>

struct date_t {
    unsigned char dia;
    unsigned char mes;
    unsigned short int ano;
};

int main()
{
    struct date_t data;

    printf("Entre com o dia: ");
    scanf("%c", &data.dia);
    getchar();
    
    printf("Entre com o mes: ");
    scanf("%c", &data.mes);
    getchar();
            
    printf("Entre com o ano: ");
    scanf("%hd", &data.ano);
    getchar();
            


    printf("Data no formato BR: \n");
    printf("%c/%c/%hd\n",
    data.dia,
    data.mes,
    data.ano
    );

    printf("Data no formato US: \n");
    printf("%c/%c/%hd\n",
    data.mes,
    data.dia,
    data.ano
    );
    
    return 0;
}