#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigoDaCidade;
    char nomeDaCidade[25];
    float populacao;
    float area;
    float PIB;
    int numeroDePontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("digite o codigo da cidade: \n");
    scanf("%d", &codigoDaCidade);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nomeDaCidade);

    printf("digite a população: \n");
    scanf("%f", &populacao);

    printf("digite a area da cidade: \n");
    scanf("%f", &area);
    printf("digite o PIB da cidade \n");
    scanf("%f", &PIB);

    printf("digite quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeroDePontosTuristicos);

    printf("o codigo da cidade é: %d - O nome da cidade é: %s - a população de sua cidade é: %f  - a area é: %f - o PIB da sua cidade é: %f - a numero de pontos turisticos de sua cidade é: %d , estes são os dados da sua cidade.", codigoDaCidade, nomeDaCidade, populacao, 
    area , PIB, numeroDePontosTuristicos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
