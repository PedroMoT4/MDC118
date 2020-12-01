#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    char outra[30];

    printf("Entre com uma string: ");
    //gets(str);//{'B','r','a','b','o','\0'}
    //fgets(str, sizeof(str), stdin);//{'B','r','a','b','o','\n'}
    scanf("%[^\n]s", str);//{'B','r','a','b','o',' ','6','9','\0'}
    printf("%s\n", str);

    printf("strlen(str) = %li\n", strlen(str));
    printf("sizeof(str) = %li\n", sizeof(str));

    for(int i=0; i<strlen(str); i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    //outra = str; Nao funciona
    strcpy(outra, str);
    printf("strcpy(outra, str) => %s\n", outra);

    printf("outra==str? %d\n", outra == str);
    printf("strcmp(outra, str)? %d\n", strcmp(outra,str));

    //outra = outra + str; Nao funciona 
    strcat(outra, str);
    printf("strcat(outra, str) => %s\n", outra);
    
    printf("outra == str %d\n", outra == str);
    printf("strcmp(outra, str)? %d\n", strcmp(outra,str));
    printf("strcmp(str, outra)? %d\n", strcmp(str,outra));
    
    printf("Achou 1 em outra? %s\n", strchr(outra, '1'));
    printf("Achou 0 em outra? %s\n", strchr(outra, '0'));
    printf("Achou 123 em outra? %s\n", strstr(outra, "123"));
    printf("Achou 456 em outra? %s\n", strstr(outra, "456"));


    strcpy(outra, str);
    printf("strcpy(outra, str) => %-30s\n", outra);

    for(int i=0; i<0; i++)
    {
        printf("%c", outra[i]);
    }

    printf("\n");

    memset(outra, 0, sizeof(outra));
    strcpy(outra, str);

    for(int i=0; i<0; i++)
    {
        printf("%c", outra[i]);
    }

    return 0;
}