#include<stdio.h>

int main() {
    // Variáveis
    int numero, soma = 0, digito;

    // Pedir o número ao usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcular a soma dos dígitos
    while(numero != 0) {
        digito = numero % 10;  // Obter o último dígito
        soma += digito;        // Adicionar o dígito à soma
        numero /= 10;          // Remover o último dígito
    }

    // Imprimir a soma dos dígitos
    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}
