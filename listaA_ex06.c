#include <stdio.h>
#include <string.h>
# define N 20

int main(){
    char palavra[N];
    printf("Digite uma palavra para descobrir de ela eh um palindromo:\n");
    scanf("%s", palavra);
    int tamanho = strlen(palavra)-1;//vai calcular a quantiddade de caracteres na palavra
    for (int i = 0; i < tamanho /2; i++) //Se indice for menor que a metade do tamanho da palavra
    {
        if(palavra[i] != palavra[tamanho -i -1]){ 
            printf("A palavra nao eh um palindromo");
            return 0;
        }
        
    }
    printf("A palavra eh um palindromo");
    
}