#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char nome[20];
    int i, t;

    printf("Digite um nome: ");
    scanf("%s", &nome);

    t=strlen(nome);

    for(i=0 ; i < t ; i++){
        printf("%c\n", nome[i]);
    }



    return 0;
}
