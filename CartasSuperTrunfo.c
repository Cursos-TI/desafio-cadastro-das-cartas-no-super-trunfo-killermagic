#include <stdio.h>

int main(){
    int populacao, populacao2, turista, turista2;
    float area, area2, pib, pib2;
    char codigo_carta[10], codigo_carta2[3], cidade[50], cidade2[50], estado[5], estado2[5];

    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo_carta);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("digite sua area: \n");
    scanf("%f", &area);

    printf("digite seu pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turista);

    printf("digite o estado: \n");
    scanf("%s", &estado2);

    printf("digite o codigo da carta: \n");
    scanf("%s", &codigo_carta2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("digite sua area: \n");
    scanf("%f", &area2);

    printf("digite seu pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turista2);

    printf("nome do estado: %s\n - codigo da carta: %s\n", estado, codigo_carta);
    printf("nome da cidade: %s\n - populacao: %d\n", cidade, populacao);
    printf("area em km²: %f\n - pib em bilhoes: %f\n", area, pib);
    printf("pontos turisticos: %d\n", turista);
    printf("nome do estado: %s\n - codigo da carta: %s\n", estado2, codigo_carta2);
    printf("nome da cidade: %s\n - populacao: %d\n", cidade2, populacao2);
    printf("area em km²: %f\n - pib em bilhoes: %f\n", area2, pib2);
    printf("pontos turisticos: %d\n", turista2);

    return 0;




}