#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Cidade 01;
    int Populacao1, Turistico1;
    float Area_cidade1, PIB1;
    char Cidade1[20], Codigo1[3] = "A01";

    //Cidade 2
    int Populacao2, Turistico2;
    float Area_cidade2, PIB2;
    char Cidade2[20], Codigo2[3] = "A02";

    //Interface ao usuário
    printf("Desafio Super Trunfo - Cidades\n");
    printf("Insira os dados abaixo para fazer o cadastro das carta.\n");

    //Atribuindo valores através do usuário
    //Cidade 1
    printf("\nCIDADE 1\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade1);

    printf("Digite o número de populção: ");
    scanf("%d", &Populacao1);

    printf("Digite a área total da cidade (Km²): ");
    scanf("%f", &Area_cidade1);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turístico da cidade: ");
    scanf("%d", &Turistico1);

    //Cidade 2
    printf("\nCIDADE 2\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade2);

    printf("Digite o número de populção: ");
    scanf("%d", &Populacao2);

    printf("Digite a área total da cidade (Km²): ");
    scanf("%f", &Area_cidade2);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turístico da cidade: ");
    scanf("%d", &Turistico2);

    //Mostrando  valores atribuido ao usuário
    //Cidade 1
    printf("\nCARTA CADASTRADA\n");
    printf("Código da carta: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área da cidade(km²): %f \n",Area_cidade1);
    printf("Produto Interno Bruto(PIB):%f \n", PIB1);
    printf("Pontos turístico da cidade:%d \n", Turistico1);

    //Cidade 2
    printf("\nCARTA CADASTRADA\n");
    printf("Código da carta: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área da cidade(km²): %f \n",Area_cidade2);
    printf("Produto Interno Bruto(PIB):%f \n", PIB2);
    printf("Pontos turístico da cidade:%d \n", Turistico2);

    return 0;
}
