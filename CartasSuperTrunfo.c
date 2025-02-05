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

    float densidade_populacional;//Densidade populacional da cidade (população/área)
    float pib_per_capita;//PIB per capita da cidade (pib/população)

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

    //Cálculo da densidade populacional
    densidade_populacional = populacao/area;
    //Cálculo do PIB per capita
    pib_per_capita = pib/populacao;

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
    printf("Densidade populacional: %.1f hab/km²\n", densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita);
    
    printf("----------------\n");

    return 0;
}