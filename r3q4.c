#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct {
    char nome[30];
    char endereco[50];
    char matricula [10];
    char curso[30];
} tAluno;

tAluno gAlunos[MAX];
int t=0;

unsigned int consultaAlunosPorCurso(char *curso){
    int i;
    unsigned int contador = 0;

    for(i = 0; i < t; i++){
        if(strcmp(gAlunos[i].curso, curso)==0){
            contador++;
        }

    }
    return contador;
}

int main(void){
    int q, i;
    char curso[30];
    unsigned int contador;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &q);

    for(i = 0; i < q ; i++){
        printf("Digite o nome do Aluno#%d: ", i+1);
        scanf("%s", &gAlunos[i].nome);
        printf("Digite o nome do curso do Aluno#%d: ", i+1);
        scanf("%s", &gAlunos[i].curso);
        t++;
    }

    printf("qual curso voce quer pesquisar: ");
    scanf("%s", &curso);

    contador = consultaAlunosPorCurso(&curso);

    printf("\nExiste %d alunos cursando %s.\n", contador, curso);
    return 0;
}
