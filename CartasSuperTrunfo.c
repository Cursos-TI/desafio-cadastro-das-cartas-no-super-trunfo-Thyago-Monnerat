#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//Prototipando a função newCard
void newCard(int id);

int main() {
    //Header para contextualizar a aplicação no terminal
    printf("==================== Bem-vindo(a) ao Super Trunfo Game ====================\n");

    //Chamando a função que cria uma carta e passando um id para dizer se é a carta 1 ou 2
    newCard(1);
    newCard(2);

    return 0;
}

//Definindo a função para a criação de uma nova carta
void newCard(int id){
    //Codigo limitado a ter 3 caracteres. Exemplo: A01, A52, A99.
    char codigo[4];
    //Cidade limitada a ter 30 caracteres.
    char cidade[31];
    char estado;
    int populacao;
    float areaKm;
    float pib;
    int pontosTuristicos;

    printf("\n---------- Cadastre uma carta ----------\n\n");

    printf("Código da carta: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    // %[^\n] Para ler TODOS os caracteres, incluindo espaços, até encontrar \n.
    scanf(" %[^\n]", cidade);

    printf("Letra do estado: ");
    scanf(" %c", &estado);

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Área em km² da cidade: ");
    scanf("%f", &areaKm);

    printf("PIB da cidade: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n==================== Informações da carta %d: ====================\n", id);
    printf("\nCódigo: %s", codigo);
    printf("\nCidade: %s", cidade);
    printf("\nEstado: %c", estado);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2fkm²", areaKm);
    printf("\nPIB: %f bilhões de reais", pib);
    printf("\nQuantidade de pontos turísticos: %d\n", pontosTuristicos);
    printf("\n==================== ////////// ====================\n", id);
}