#include <stdio.h>

int main() {
    // Menu inicial
    printf("Seja bem-vindo ao Super Trunfo!\n");

    // ======== Carta 1 ========
    char estado_1[50], cidade_1[100];
    int populacao_1;
    float area_1, pib_1;
    int pontos_turisticos1;
    int numero_1 = 1;

    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_1);

    printf("Digite a população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área (km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // ======== Carta 2 ========
    char estado_2[50], cidade_2[100];
    int populacao_2;
    float area_2, pib_2;
    int pontos_turisticos2;
    int numero_2 = 2;

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_2);

    printf("Digite a população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área (km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // ======== Exibição das cartas ========
    printf("\n===== Carta 1 =====\n");
    printf("Código: %c%c%d\n", estado_1[0], cidade_1[0], numero_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n===== Carta 2 =====\n");
    printf("Código: %c%c%d\n", estado_2[0], cidade_2[0], numero_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}