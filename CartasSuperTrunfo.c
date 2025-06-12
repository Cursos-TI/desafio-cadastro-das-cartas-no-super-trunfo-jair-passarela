#include <stdio.h>

int main(){
    // carta 1 
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float pibcap1;
   long double superpoder1; 

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float pibcap2;
    long double superpoder2;

    //dados da carta 1 
    printf("\nCadastro da carta 1:\n ");// a partir daqui exibiremos o cadastro da primeira carta

    printf("Digite o estado da carta 1: ");// pedimos o estado da carta
    scanf(" %c",&estado1);
     

    printf("Digite o codigo da carta 1: ");// pedimos o codigo da carta
    scanf(" %s",codigo1);
     

    printf("digite o nome da cidade 1: ");// pedimos o nome da carta
    scanf( " %[^\n]",cidade1);

    printf("Digite a populacao da cidade 1: ");// pedimos a população da carta
    scanf("%lu",&populacao1);

    printf("Digite o tamanho da area da cidade 1: ");// pedimos o tamanho da area da carta
    scanf("%f",&area1);

    printf("Digite o numero do pib da cidade 1: ");// pedimos o pib da carta 
    scanf("%f",&pib1);

    printf("digite o numero de pontos turisticos da cidade 1: ");// pedimos o pontos turisticos da carta
    scanf("%d",&turismo1);

    pib1 = pib1 * 1e9; // aqui multiplicamos o pib
    densidade1 = ((float)populacao1 / area1);//aqui atribuimos a densidade da primeira carta dividindo a populacao pela area (passamos a populaçao pra float)
    pibcap1 = (pib1 / (float)populacao1);// atrubuimos o pib per cap dividindo o pib pela populacao (passamos a populacao para float)
    superpoder1 = ((float)populacao1 + area1 + pib1 + turismo1 + pibcap1 + (1 / densidade1));// atruibuimos o superpoder para a carta somando todos os dados 

    // dados da carta 2

    printf("Cadastro da carta 2:\n"); // aqui comecamos os dados da segunda carta

    scanf(" %c",&estado2);
     
    printf("Digite o codigo da carta 2: "); //pedimos o codigo
    scanf(" %s",codigo2);
     

    printf("digite o nome da cidade 2: "); //pedimos o nome 
    scanf( " %[^\n]", cidade2);

    printf("Digite a populacao da cidade 2: ");//  pedimos a populacao
    scanf("%lu",&populacao2);
     

    printf("Digite o tamanho da area da cidade 2: ");// pedimos o tamanho da area
    scanf("%f",&area2);
     

    printf("Digite o numero do pib da cidade 2: "); //pedimos o pib
    scanf("%f",&pib2);

    printf("digite o numero de pontos turisticos da cidade 2: "); //pedimos o numeros de pontos turisticos
    scanf("%d",&turismo2);

    pib2 = pib2 * 1e9; // aqui multiplicamos o pib
    densidade2 = ((float)populacao2 / area2);// aqui atruibuimos a densidade da carta 2
    pibcap2 = (pib2 / (float)populacao2);// aqui atribuimos o pib per cap 

    superpoder2 = (float)populacao2 + area2 + pib2 + turismo2 + pibcap2 + (1 / densidade2);// aqui atrubuimos o super poder da carta 2 somando todos os dados

    //  Exibição das cartas
    // Exibição da carta 1
    printf("\nCarta1:\n"); // a partir daqui exibiremos todos os dados q pedimos da primeira carta
    
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2fkm2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos turisticos: %d\n", turismo1);
    printf("densidade populacional: %.2f hab/km2\n", densidade1);
    printf("pib per capital: %.2f reais\n", pibcap1);

    // Exibição da carta 2 
    printf("\nCarta2:\n");// a partidar daqui exibiremos todos os dados q pedimos da segunda carta
    
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %.2f  reais\n", pib2);
    printf("Pontos turisticos: %d\n", turismo2);
    printf("densidade populacional: %.2f hab/km2\n", densidade2);
    printf("pib per capital: %.2f reais\n", pibcap2);

    printf( "\nComparacao de cartas\n");// aqui declaramos a carta vencedora

    printf("Populacao: Carta 1 venceu %d \n", populacao1 > populacao2);
    printf("Populacao: Carta 2 venceu %d \n", populacao2 > populacao1);
    printf("Area: Carta 1 venceu %d \n", area1 > area2);
    printf("Area: carta 2 venceu %d \n", area2 > area1);
    printf("PIB: Carta 1 venceu %d \n", pib1 > pib2);
    printf("PIB: carta 2 venceu %d \n", pib2 > pib1);
    printf("Pontos Turisticos: Carta 1 venceu %d\n", turismo1 > turismo2);
    printf("Pontos Turisticos: Carta 2 venceu %d \n",turismo2 > turismo1 );
    printf("Densidade Populacional: Carta 1 venceu %d\n", densidade1 < densidade2);
    printf("Densidade Populacional: Carta 2 venceu %d \n", densidade2 < densidade1);
    printf("PIB per Capita: Carta 1 venceu %d\n", pibcap1 > pibcap2);
    printf("PIB per Capita: Carta 2 venceu %d \n", pibcap2 > pibcap1);
    printf("Super Poder: Carta 1 venceu %d\n", superpoder1 > superpoder2);
    printf("Super poder: Carta 2 venceu %d \n", superpoder2 > superpoder1);
    return 0;
}
