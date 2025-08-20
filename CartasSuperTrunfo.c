#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definição das variáveis carta 1
    char Estado1[20];
    char Codigo_carta1[3];
    char Nome_Cidade1[20];
    int Populacao1;
    float Area_Km²1;
    float PIB1;
    int Quantidade_Pontos_Turisticos1;

    printf("Primeira carta \n");
    printf("Nome do Estado: ");
    scanf(" %s", Estado1);

    printf("Código da Carta: ");
    scanf(" %s", Codigo_carta1);

    printf("Nome da Cidade: ");
    scanf(" %s", Nome_Cidade1);

    printf("População: ");
    scanf(" %d", &Populacao1);

    printf("Área em Km²: ");
    scanf(" %f", &Area_Km²1);

    printf("PIB: ");
    scanf(" %f", &PIB1);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d", &Quantidade_Pontos_Turisticos1);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
}
