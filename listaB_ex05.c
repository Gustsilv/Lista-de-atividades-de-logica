#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Escreva um programa em C que conta o número de palavras em uma frase fornecida pelo
usuário. Considere que as palavras são separadas por espaços. A saída deve mostrar o
número de palavras na frase*/

#define MAX 100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[MAX];
    int contador = 0, i;

    printf("Digite uma frase: \n");
    fgets(frase, MAX, stdin);

    for(i = 0; frase[i] != '\0'; i++){
        if (frase[i] == ' ' && frase[i+1] != ' ')
        {
            contador++;
        }
        
    }
    printf("A frase tem %d palavras\n", contador + 1);
    return 0;
}
