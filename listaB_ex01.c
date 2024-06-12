#include <stdio.h>

/*Escreva um programa em C que calcula a média ponderada de três notas, onde cada nota
tem um peso diferente. A entrada deve ser as três notas e seus respectivos pesos. A saída
deve ser a média ponderada calculada.*/

int main(){

int nota[3];
float peso[3], mediaPonderada;
int i;


for (i = 0; i < 3; i++) {
    printf("Digite a nota válida:\n");
    scanf("%d", &nota[i]);
    printf("Digite o peso:\n");
    scanf("%f", &peso[i]);
    
    do {
        printf("Digite a nota válida:\n");
        scanf("%d", &nota[i]);
            
        if (nota[i] < 0 || nota[i] > 10 )
            printf("Digite um valor válido!\n");
    } while (nota[i] < 0 || nota[i] > 10);


    do {
        printf("Digite o peso válido:\n");
        scanf("%f", &peso[i]);
            
        if (peso[i] <0 || peso[i] >10)
            printf("Digite um valor válido!\n");
    } while (peso[i] <0 || peso[i] >10);
}



mediaPonderada = ((nota[0] * peso[0]) + (nota[1] * peso[1]) + (nota[2] * peso[2]))/(peso[0] + peso[1] + peso[2]);
printf("%.2f", mediaPonderada);



    return 0;
}