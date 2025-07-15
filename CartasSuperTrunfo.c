//Super-trunfo
//OBjetivo desse trabalho é apenas receber dados e mostrar informações com printf e scanf

#include <stdio.h>

int main () {

    //Menu inicial
    printf("Seja bem-vindo ao jogo Super-Trunfo!\n\n");
    printf("Digite os valores corretamente para cadastrar a Carta 1!\n");

    //Carta 1
    //Variáveis
    char estado_1 [50];
    char cidade_1 [50];
    int populacao_1;
    float area_1;
    float pib_1;
    int ponto_turistico_1;
    double densidade_populacional_1;
    double pib_percapita_1;

    //Entrada de dados Carta 1
    printf("Estado: ");
    scanf(" %[^\n]", estado_1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade_1);
    printf("População da cidade: ");
    scanf("\n%d", &populacao_1);
    printf("Digite a área(m²) da cidade: ");
    scanf("\n%f", &area_1);
    printf("Digite o PIB da cidade: ");
    scanf("\n%f", &pib_1);
    printf("Pontos turisticos: ");
    scanf("\n%d", &ponto_turistico_1);

    //Operação Matemática
    densidade_populacional_1 = (double) populacao_1 / area_1;
    pib_percapita_1 = (double) pib_1 / populacao_1;

    //Carta 2
    //Variáves
    char estado_2[50];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int ponto_turistico_2;
    double densidade_populacional_2;
    double pib_percapita_2;

    //Entrada de dados Carta 2
    printf("\nDigite os dados corretamente da Carta 2!\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado_2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade_2);
    printf("Populução da cidade: ");
    scanf("\n%d", &populacao_2);
    printf("Digite a área(m²) da cidade: ");
    scanf("\n%f", &area_2);
    printf("Digite o PIB da cidade: ");
    scanf("\n%f", &pib_2);
    printf("Pontos turisticos: ");
    scanf("\n\n%d", &ponto_turistico_2);

    //Operação Matemática
    densidade_populacional_2 = (double) populacao_1 / area_1;
    pib_percapita_2 = (double) pib_1 / populacao_1;

    //Saída de Dados

    //Saída de dados Carta 1
    printf("\nCarta 1 - Super-Trunfo\n\n");
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Densidade Populacional: %.2lf\n", densidade_populacional_1);
    printf("Área(m²) da cidade: %.2f.2f\n", area_1);
    printf("PIB da cidade: R$ %.2f\n", pib_1);
    printf("PIB Per Capita: %.2lf\n", pib_percapita_1);
    printf("Pontos turísticos: %d\n", ponto_turistico_1);

    //Saída de dados Carta 2
    printf("\nCarta 2 - Super-Trunfo\n\n");
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Densidade Populacional: %.2lf\n", densidade_populacional_2);
    printf("Área(m²) da cidade: %.2f\n", area_2);
    printf("PIB da cidade: R$ %.2f\n", pib_2);
    printf("PIB Per Capita: %.2lf\n", pib_percapita_2);
    printf("Pontos turísticos: %d\n", ponto_turistico_2);

    return 0;
}
