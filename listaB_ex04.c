/*Crie um programa em C que calcula a potência de um número base elevado a um expoente
fornecido pelo usuário. A saída deve ser o resultado da operação*/

#include <stdio.h>

int calcularPotencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Insira a base: ");
    scanf("%d", &base);
    printf("Insira o expoente: ");
    scanf("%d", &expoente);

    int resultado = calcularPotencia(base, expoente);
    printf("%d elevado a %d é igual a %d.\n", base, expoente, resultado);

    return 0;
}
