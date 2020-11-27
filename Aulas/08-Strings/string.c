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

    for(int i=0; i<strlen(str); i++){
        printf("%c", str[i]);
    }

    printf("\n");

    //outra = str; Nao funciona
    strcpy(outra, str);
    printf("strcpy(outra, str) => %s\n", outra);

    

    return 0;
}