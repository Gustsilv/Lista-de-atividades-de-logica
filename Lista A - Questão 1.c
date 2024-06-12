#include<stdio.h>

int main(){

//Variaveis    
    int n1, n2, n3, media;

//Pedir dados ao usuario
    printf("Digite tres numeros inteiros para calcular a media entre eles:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

//Calculo da media
    media = (n1 + n2 + n3) / 3;

//Resultado Final
    printf("A media dos numeros e: %d \n", media);

    return 0;    



}