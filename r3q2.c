#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ImprimeNaVertical(char nome[], int t){
    int i, j;

    for(i=0 ; i < t ; i++){
            for(j = 0 ; j <= i ; j++){
                printf("%c", nome[j]);
        }
        printf("\n");
    }
}

int main(void){
    char nome[20];
    int i, t;

    printf("Digite um nome: ");
    scanf("%s", &nome);

    t=strlen(nome);
    ImprimeNaVertical(nome, t);

    return 0;
}
