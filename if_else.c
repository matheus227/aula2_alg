#include <stdio.h> //para esse código é necessário essa biblioteca do C

int main(){
    int numero;
    printf("digite um número: ");
    scanf("%d", &numero); //& referencia, expressa o endereço, onde vai salvar o valor

    printf("Número Digitado: %d\n", numero); //%d entende que tem um valor mais para frente, ou seja o "numero".

    if(numero > 0) {
        printf("Número Positivo\n");
    } else if(numer < 0) { //NÃO é igual python, o elif do python é else if no C, e precisa estar dps da chaves do if.
        printf("Número Negtivo\n");
    } else {
        printf("Número Zero\n");
    }

    if(numero % 2 == 0) {
        printf("Número Par\n");
    } else { //else sem c, sempre se usa dps das chaves do if.
        printf("Número ímpar")
    }

    /*     if(numero < 0) {
        printf("Número Negativo\n");
    }
    */

    return 0
}