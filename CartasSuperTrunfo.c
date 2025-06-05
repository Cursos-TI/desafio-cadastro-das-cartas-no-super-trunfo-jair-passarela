#include <stdio.h>

int main(){
    // carta 1 
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    //dados da carta 1 
    printf("Cadastro da carta 1:\n ");

    printf("Digite o estado da carta 1: ");
    scanf(" %c",&estado1);
     

    printf("Digite o codigo da carta 1: ");
    scanf(" %s",codigo1);
     

    printf("digite o nome da cidade 1: ");
    scanf( " %[^\n]",cidade1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%d",&populacao1);

    printf("Digite o tamanho da area da cidade 1: ");
    scanf("%f",&area1);

    printf("Digite o numero do pib da cidade 1: ");
    scanf("%f",&pib1);

    printf("digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d",&turismo1);

    // dados da carta 2

    printf("Cadastro da carta 2:\n");

    printf("Digite o estado da carta 2: ");
    scanf(" %c",&estado2);
     
    printf("Digite o codigo da carta 2: ");
    scanf(" %s",codigo2);
     

    printf("digite o nome da cidade 2: ");
    scanf( " %[^\n]", cidade2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%d",&populacao2);
     

    printf("Digite o tamanho da area da cidade 2: ");
    scanf("%f",&area2);
     

    printf("Digite o numero do pib da cidade 2: ");
    scanf("%f",&pib2);

    printf("digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d",&turismo2);

    //  Exibição das cartas
    // Exibição da carta 1
    printf("\nCarta1:\n");
    
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2fkm2\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", turismo1);

    // Exibição da carta 2 
    printf("\nCarta2:\n");
    
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", turismo2);
    return 0;
}