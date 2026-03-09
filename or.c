#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade < 12 || idade > 60) { // "||" equivalente ao or do python.
        printf("Tem desconto\n");
    } else {
        printf("Não tem desconto nem galantia\n");
    }

  ;   

    return 0;
}