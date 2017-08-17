#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nome[30];
    char estilo[20];
    int integrantes;
    int hanking;
}tBanda;
void Informacoes(tBanda * banda){

    printf("-------------------CADASTRO-------------------\n");
    printf("Digite o nome da banda: ");
    fgets(banda->nome, 30, stdin);
    banda->nome[strlen(banda->nome)-1]='\0';
    printf("Qual o estilo musical da banda?: ");
    fgets(banda->estilo, 20, stdin);
    banda->estilo[strlen(banda->estilo)-1]='\0';
    printf("Quantos integrantes a banda possui?: ");
    scanf("%d", &banda->integrantes);
    printf("Em que lugar ela esta no hanking das suas bandas favoritas?: ");
    scanf("%d%*c", &banda->hanking);
    printf("----------------------------------------------\n");
    printf("BANDA CADASTRADA!\n\n");
    printf("\tNOME DA BANDA: %s\n", banda->nome);
    printf("\tESTILO MUSICAL: %s\n", banda->estilo);
    printf("\tNUMERO DE INTEGRANTES: %d\n", banda->integrantes);
    printf("\tPOSICAO NO HANKING: %d\n\n", banda->hanking);

}
void hanking(tBanda banda[]){

    int i, p;

    printf("Digite um numero de 1 ate 5: ");
    scanf("%d%*c", &p);

    for(i=0 ; i < 5 ; i++){
        if(banda[i].hanking == p){
            printf("Informações da banda %d do hanking.\n", p);
            printf("\tNOME DA BANDA: %s\n", banda[i].nome);
            printf("\tESTILO MUSICAL: %s\n", banda[i].estilo);
            printf("\tNUMERO DE INTEGRANTES: %d\n", banda[i].integrantes);

        }
    }


}
void pEstilo(tBanda banda[]){

    int i;
    char estilo[20];

    printf("Digite um estilo musical: ");
    fgets(estilo, 20, stdin);
    estilo[strlen(estilo)-1]='\0';

    for(i=0 ; i < 5 ; i++){
        if(strcmp(banda[i].estilo, estilo)==0){
            printf("Informações da(as) banda(as) com o mesmo estilo musical %s", estilo);
            printf("\tNOME DA BANDA: %s\n", banda[i].nome);
            printf("\tNUMERO DE INTEGRANTES: %d\n", banda[i].integrantes);
            printf("\tHANKING: %d", banda[i].hanking);

        }
    }
}
void pNomeBanda(tBanda banda[]){

    int i;
    char nome[30];

    printf("Digite um nome de uma banda: ");
    fgets(nome, 30, stdin);
    nome[strlen(nome)-1]='\0';

    for(i=0 ; i < 5 ; i++){
        if(strcmp(banda[i].nome, nome)==0){
            printf("Informações da(as) banda(as) com o mesmo nome: %s", nome);
            printf("\tESTILO MUSICAL: %s\n", banda[i].estilo);
            printf("\tNUMERO DE INTEGRANTES: %d\n", banda[i].integrantes);
            printf("\tHANKING: %d", banda[i].hanking);

        }
    }
}
int main(void){

    tBanda bandas[5];
    int i;

    for(i=0 ; i<5 ; i++){
        Informacoes(&bandas[i]);
    }
    hanking(bandas);
    pEstilo(bandas);
    pNomeBanda(bandas);

    return 0;
}
