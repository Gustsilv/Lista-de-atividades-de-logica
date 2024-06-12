#include<stdio.h>
#include <locale.h>

/*Crie um programa em C que verifica se um número fornecido pelo usuário é primo ou não.
A saída deve indicar se o número é primo ou não.*/

int main() {
 setlocale(LC_ALL, "portuguese");
 int numero, i, result = 0;
 
 printf("Digite um número: ");
 scanf("%d", &numero);
 
 for (i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
       result++;
       break;
    }
 }
 
 if (result == 0)
    printf("%d é um numero primo\n", numero);
 else
    printf("%d não é um número primo\n", numero);
 
 return 0;
}