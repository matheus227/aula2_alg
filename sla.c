#include <stdio.h>

int main(){
    int numero;
    printf("digite um número: ");
    scanf("%d", &numero); //& referencia, expressa o endereço, onde vai salvar o valor

    printf("Número Digitado: %d\n", numero); //%d entende que tem um valor mais para frente, ou seja o "numero".

    if(numero > 0) {
        prinf("Número Positivo\n");
    }

    if(numero % 2 == 0) {
        printf("Número Par\n");
    }

    /*     if(numero < 0) {
        printf("Número Negativo\n");
    }
 */

    return 0
}