#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis carta 1
    char Estado1[2];
    char Codigo_carta1[4];
    char Nome_Cidade1[20];
    int Populacao1;
    float PIB1;
    float Area_Km2_1;
    int Quantidade_Pontos_Turisticos1;

    printf("Primeira carta \n");

    printf("Estado (Letra entre A-H): ");
    scanf(" %1s", Estado1);

    printf("Código da Carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf(" %3s", Codigo_carta1);

    printf("Nome da Cidade: ");
    scanf(" %19s", Nome_Cidade1);

    printf("População (Em milhares, utilize um número inteiro): ");
    scanf(" %d", &Populacao1);

    printf("PIB (Em bilhões, utilize ponto como separador): ");
    scanf(" %f", &PIB1);

    printf("Área em Km²: ");
    scanf(" %f", &Area_Km2_1);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &Quantidade_Pontos_Turisticos1);

    // Definição das variáveis carta 2
    char Estado2[2];
    char Codigo_carta2[4];
    char Nome_Cidade2[20];
    int Populacao2;
    float PIB2;
    float Area_Km2_2;
    int Quantidade_Pontos_Turisticos2;

    printf("Segunda carta \n");

    printf("Estado (Letra entre A-H): ");
    scanf(" %1s", Estado2);

    printf("Código da Carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf(" %3s", Codigo_carta2);

    printf("Nome da Cidade: ");
    scanf(" %19s", Nome_Cidade2);

    printf("População (Em milhares, utilize um número inteiro): ");
    scanf(" %d", &Populacao2);

    printf("PIB (Em bilhões, utilize ponto como separador): ");
    scanf(" %f", &PIB2);

    printf("Área em Km²: ");
    scanf(" %f", &Area_Km2_2);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &Quantidade_Pontos_Turisticos2);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    return 0;
    
}
