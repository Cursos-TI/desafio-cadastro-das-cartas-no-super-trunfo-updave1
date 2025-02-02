#include <stdio.h>

int main() {
    // Declaração de variáveis:
    /*char estado[1];*///Estado, ou país será representado por uma letra
    char codigo[4];//Código da cidade
    char cidade[50];//Nome da cidade
    int populacao;//População da cidade
    float area;//Área da cidade
    float pib;//PIB da cidade  
    int pontos_turisticos;//Número de pontos turísticos da cidade

    // Inserção de dados das cartas:
    printf("Digite código da carta:\n ");
    scanf("%4s", codigo);

    printf("Digite nome da cidade:\n ");
    scanf(" %49[^\n]", cidade);

    printf("Digite população da cidade:\n ");
    scanf("%d", &populacao);

    printf("Digite área da cidade:\n ");
    scanf(" %f", &area);
    while (getchar() != '\n');

    printf("Digite PIB da cidade:\n ");
    scanf(" %f", &pib);
    while (getchar() != '\n');

    printf("Digite número de pontos turísticos da cidade:\n "); 
    scanf("%d", &pontos_turisticos); 
    while (getchar() != '\n');  

    //Mensagem de confirmação
    printf("***Carta cadastrada com sucesso!***\n");
    printf("----------------\n");
    // Exibição dos dados das cartas:
    printf("Codigo: %s\n", codigo); 
    printf("Nome: %s\n", cidade);
    printf("Populacao: %d habitantes\n", populacao);   
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões de reais\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    printf("----------------\n");

    return 0;
}