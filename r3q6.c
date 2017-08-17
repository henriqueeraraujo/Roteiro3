#include <stdio.h>
#include <stdlib.h>

float Percentual(int total, int individual){
    float percentual;

    percentual = (individual * 100)/(float)total;

    return percentual;
}

int main(void){

    int jogador[24]={0}, n, votosValidos, maior=0, i;

    printf("Enquete: quem foi o melhor jogador?\n\n");

    while(1){
        printf("Numero do jogador (0=fim): ");
        scanf("%d", &n);

        if(n==0){
            break;
        }
        if(n<0 || n > 23){
            printf("Informe um valor entre 1 e 23 ou 0 para sair!\n");
            continue;
        }
        votosValidos++;
        jogador[n]++;
    }
    printf("\nResultado da Votacao:\n");
    printf("Foram Computados %d\n", votosValidos);
    printf("Jogador \tVotos \t%c\n", 37);

    for(i=1; i<24 ; i++){
        if(jogador[i] > 0){
            printf("%d \t\t%d \t%0.2f%c\n", i, jogador[i], Percentual(votosValidos, jogador[i]), 37);

            if(jogador[i]>jogador[maior]){
                maior = 1;
            }
        }
    }

    printf("O melhor jogador foi o numero %d, com %d votos, correspondendo a %0.2f%c\n"
           "do total de votos.\n", maior, jogador[maior], Percentual(votosValidos, jogador[maior]), 37);
    return  0;
}
