#include <stdio.h>
#include <locale.h>

/*4- Conversor de temperatura:
Escreva um programa em C que converte uma temperatura em Celsius para Fahrenheit. A
entrada deve ser a temperatura em Celsius e a saída deve ser a temperatura equivalente
em Fahrenheit.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float tempCel, tempFah = 0;
    printf("Conversor de temperaturas:\n");
    printf("Digite o valor de uma temperatura em Celsius: \n");
    scanf("%f", &tempCel);

    tempFah = (tempCel * 1.8) + 32;

    printf("Conversão concluída:\n");
    printf("Temperatura em Fahrenheit e igual a %.2f graus\n", tempFah);

    return 0;
}
