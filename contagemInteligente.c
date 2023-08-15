#include<stdio.h>

int main() {
    int inicio, fim, maior, menor;
    printf("CONTAGEM INTELIGENTE\n");
    printf("--------------------\n");
    printf("Início: ");
    scanf("%i", &inicio);
    printf("Fim: ");
    scanf("%i", &fim);
    printf("--------------------\n");
    printf("  C O N T A N D O   \n");
    printf("--------------------\n");

    if (inicio < fim) {
        menor = inicio;
        maior = fim;
        while (menor <= maior) {
            printf("%i.. ", menor);
            menor++;
        }
    } else {
        maior = inicio;
        menor = fim;
        while (maior >= menor) {
            printf("%i.. ", maior);
            maior--;
    }
    }

    return 0;
}