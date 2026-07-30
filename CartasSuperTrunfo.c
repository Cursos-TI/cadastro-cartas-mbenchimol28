#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    
    // Configuração do console para suportar caracteres especiais

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo_da_carta1[50];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;

    char estado2;
    char codigo_da_carta2[50];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    // Área para entrada de dados da carta um
    printf("Digite os dados da Carta 01:\n\n");

    printf("Digite o estado (A ate H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Código da Carta (A01 até D04): ");
    scanf(" %s", codigo_da_carta1);
    getchar();

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);
    getchar();

    printf("População: ");
    scanf(" %d", &populacao1);
    getchar();

    printf("Área (em km²): ");
    scanf(" %f", &area1);
    getchar();

    printf("PIB: ");
    scanf(" %f", &pib1);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos1);
    getchar();

    // Área para entrada de dados da carta dois

    printf("\nDigite os dados da Carta 02:\n\n");

    printf("Digite o estado (A ate H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Código da Carta (A01 até D04): ");
    scanf(" %s", codigo_da_carta2);
    getchar();

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    getchar();

    printf("População: ");
    scanf(" %d", &populacao2);
    getchar();

    printf("Área (em km²): ");
    scanf(" %f", &area2);
    getchar();

    printf("PIB: ");
    scanf(" %f", &pib2);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos2);
    getchar();

    // Área para exibição dos dados da cidade 1
    
    printf("\nCarta 1:\n\n");
    
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    // Área para exibição dos dados da cidade 2

    printf("\nCarta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

    getchar();

    return 0;
}
