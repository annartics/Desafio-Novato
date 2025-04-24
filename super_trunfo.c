#include <stdio.h>

int main (){
    // Variáveis para armazenar os dados das cidades
    int populacao, populacao2;
    int pTuristico, pTuristico2;
    float pib, pib2;
    float area, area2;
    char estado, estado2;
    char codigo[50], codigo2[50];
    char cidade[100], cidade2[100];

    printf("Bem vindo! Vamos jogar Super Trunfo!\n"); // Boas-vindas ao jogo
    // Entrada das letras dos estados
    // O espaço antes de %c ignora qualquer caractere de quebra de linha (\n) anterior
    printf("Digite duas letra entre A e H, representando os estados: ");
    scanf(" %c %c", &estado, &estado2);

    // Entrada dos códigos das cidades (ex: A01, B03). Strings, por isso sem &.
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s %s", &codigo, &codigo2);

    // Entrada dos nomes das cidades.
    // O formato %[^\n]%*c lê até a quebra de linha e descarta o \n do buffer
    printf("Digite os nomes das cidades: ");
    scanf(" %[^\n]%*c", cidade);
    scanf(" %[^\n]%*c", cidade2);

    // Entrada da população de cada cidade
    printf("Digite os números de habitantes das cidades: ");
    scanf("%d %d", &populacao, &populacao2);

    // Entrada da área de cada cidade
    printf("Digite as áreas das cidades em quilômetros quadrados: ");
    scanf("%f %f", &area, &area2);

    // Entrada do PIB de cada cidade
    printf("Digite o Produto Interno Bruto das duas cidades em bilhões de reais: ");
    scanf("%f %f", &pib, &pib2);

    // Entrada da quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos nas cidades: ");
    scanf("%d %d", &pTuristico, &pTuristico2);

    // Impressão formatada dos dados da primeira cidade
    printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n",estado, codigo, cidade, populacao, area, pib, pTuristico);
    // Impressão formatada dos dados da segunda cidade
    printf("Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n",estado2, codigo2, cidade2, populacao2, area2, pib2, pTuristico2);

    // Finalização bem-sucedida do programa
    return 0; 
}