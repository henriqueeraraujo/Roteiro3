#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char palavra[20], palavra2[20];
    int i, j = 0, t;

    printf("Digite uma Palavra: ");
    scanf("%s", &palavra);

    t = strlen(palavra);

    for(i=t-1 ; i>=0 ; i--){
        palavra2[j]=palavra[i];
        j++;
    }

    palavra2[t]='\0';

    if(strcmp(palavra, palavra2)!=0){
        printf("%s nao eh um palindromo \n", palavra);
    }else{
        printf("%s eh um palindromo \n", palavra);
    }

    return 0;
}
