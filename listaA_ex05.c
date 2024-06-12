#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    unsigned long long resultFatorial = 1; 
    //Eu tive que usar unsigned para impedir o calculo de números negativos e long long para calcular numeros inteiros enormes

    printf("Fatorial de um número:\n");
    printf("Digite o valor de um número inteiro: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        resultFatorial *= i;
    }

    printf("Fatorial de %d é igual a %llu\n", num, resultFatorial);

    return 0;
}