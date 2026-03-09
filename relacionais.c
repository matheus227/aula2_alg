#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18) {
        if(idade <= 70){
            printf("Voto obrigatório vagabundo\n");
        }
    }

 if((idade >= 18) && (idade <= 70)) //&& é equivalente ao and do python. Se idade for maior ou igual a 18 E(&&) menor ou igual a 70, ele printa.
            printf("Voto obrigatório vagabundo\n");
    {}





    return 0;
}