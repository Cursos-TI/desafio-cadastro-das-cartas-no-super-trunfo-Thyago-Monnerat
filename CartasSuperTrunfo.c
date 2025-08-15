#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Prototipando função para exibição dos dados
void exibirCarta( 
    int id, 
    char codigo[4],
    char cidade[31],
    char estado,
    int populacao,
    float areaKm,
    float pib,
    int pontosTuristicos,
    float pibPerCapita,
    float densidadePopulacao,
    float superPoder
);

// Prototipando função para comparar dados entre as cartas
void compararPoder(char nomeCampo[24], float campoCarta1, float campoCarta2);

int main() {
        
    //Codigo limitado a ter 3 caracteres. Exemplo: A01, A52, A99.
    char codigo1[4];
    //Cidade limitada a ter 30 caracteres.
    char cidade1[31];
    char estado1;
    unsigned int populacao1;
    float areaKm1;
    float pib1;
    unsigned int pontosTuristicos1;
    float pibPerCapita1;
    float densidadePopulacao1;
    float superPoder1;

    char codigo2[4];
    char cidade2[31];
    char estado2;
    unsigned int populacao2;
    float areaKm2;
    float pib2;
    unsigned int pontosTuristicos2;
    float pibPerCapita2;
    float densidadePopulacao2;
    float superPoder2;

    //Header para contextualizar a aplicação no terminal
    printf("==================== Bem-vindo(a) ao Super Trunfo Game ====================\n");


    printf("\n---------- Cadastre a primeira carta ----------\n\n");

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    // %[^\n] Para ler TODOS os caracteres, incluindo espaços, até encontrar \n.
    scanf(" %[^\n]", cidade1);

    printf("Letra do estado: ");
    scanf(" %c", &estado1);

    printf("População da cidade: ");
    scanf("%d", &populacao1);

    printf("Área em km² da cidade: ");
    scanf("%f", &areaKm1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Casting de float pois população é um inteiro, o que torna o retorno de um ponto flutuante não garantido
    pibPerCapita1 = (float) pib1 / populacao1;
    densidadePopulacao1 = (float) populacao1 / areaKm1;
    superPoder1 = (float) populacao1 + areaKm1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidadePopulacao1;

    printf("\n---------- Cadastre a segunda carta ----------\n\n");

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Letra do estado: ");
    scanf(" %c", &estado2);

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área em km² da cidade: ");
    scanf("%f", &areaKm2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    pibPerCapita2 = (float) pib2 / populacao2;
    densidadePopulacao2 = (float) populacao2 / areaKm2;
    superPoder2 = (float) populacao2 + areaKm2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidadePopulacao2;

    exibirCarta(1, codigo1, cidade1, estado1, populacao1, areaKm1, pib1, pontosTuristicos1, pibPerCapita1, (1/densidadePopulacao1), superPoder1);
    exibirCarta(2, codigo2, cidade2, estado2, populacao2, areaKm2, pib2, pontosTuristicos2, pibPerCapita2, (1/densidadePopulacao2), superPoder2);

    printf("\n==================== Hora de ver quem ganhou ====================\n\n");

    //Casting as variáveis int em float para simplificar a passagem de parâmetros
    compararPoder("população", (float) populacao1, (float) populacao2);
    compararPoder("área km²", areaKm1, areaKm2);
    compararPoder("PIB", pib1, pib2);
    compararPoder("pontos turísticos", pontosTuristicos1, pontosTuristicos2);
    compararPoder("PIB per capita", pibPerCapita1, pibPerCapita2);
    compararPoder("densidade populacional", (1/densidadePopulacao1), (1/densidadePopulacao2));
    compararPoder("super poder", superPoder1, superPoder2);

    printf("\n==================== ////////// ====================\n");

    return 0;
}

//Definindo a função de exibição de carta
void exibirCarta(
    int id, 
    char codigo[4],
    char cidade[31],
    char estado,
    int populacao,
    float areaKm,
    float pib,
    int pontosTuristicos,
    float pibPerCapita,
    float densidadePopulacao,
    float superPoder
){

    printf("\n==================== Informações da carta %d: ====================\n", id);
    printf("\nCódigo: %s", codigo);
    printf("\nCidade: %s", cidade);
    printf("\nEstado: %c", estado);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2fkm²", areaKm);
    printf("\nPIB: %f bilhões de reais", pib);
    printf("\nQuantidade de pontos turísticos: %d\n", pontosTuristicos);
    printf("PIB per capita: %f\n", pibPerCapita);
    printf("Densidade populacional: %f\n", densidadePopulacao);
    printf("Super poder: %f\n", superPoder);
}

//Definindo função para comparar os campos
void compararPoder(char nomeCampo[24], float campoCarta1, float campoCarta2){
    //Usando operador ternário para comparação e retorno
   printf("Comparação do campo %s: %s\n",nomeCampo, campoCarta1 > campoCarta2 ? "Carta 1 venceu" : campoCarta1 < campoCarta2 ? "Carta 2 venceu" : "Empate");
}