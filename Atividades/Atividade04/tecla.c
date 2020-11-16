#include <stdio.h>
#include <ctype.h>

// A-Z ou a-z = letra
// 0-9 = digito
// else = caractere especial

int main(){
    
    char tecla;

    printf("Digite uma tecla: ");
    scanf("%c", &tecla);
    getchar();

    if(isalpha(tecla))
    {
        printf("%c eh uma letra\n", tecla);
    }
    if(isdigit(tecla))
    {
        printf("%c eh um digito\n", tecla);
    }
    else if(isdigit(tecla)==0 && isalpha(tecla)==0){
        printf("%c eh um caractere especial\n", tecla);
    }

    return 0;
}