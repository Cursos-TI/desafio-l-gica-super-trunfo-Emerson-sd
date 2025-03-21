#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char cidade[50],cidade2[50];
    printf( "\ndigite a cidade:");
    scanf("%s",&cidade);
    
    char estado[50],estado2[50];
    printf("\nDigite o estado da cidade :");    
    scanf("%s",&estado);

    char codigo[50],codigo2[50];
    printf("\nCodigo da cidade:"); 
    scanf("%s",&codigo);

    int populacao_da_cidade,populacao_da_cidade2;
    printf("\nInforme a populaçao da cidade:");
    scanf("%d",&populacao_da_cidade);

    float pib,pib2 ;
    printf("\nInforme o pib da cidade:");
    scanf("%f",&pib);

    float area,area2 ;
    printf("\nInforme a area da cidade:");
    scanf("%f",&area);

    int pontos_turisticos,pontos_turisticos2;
    printf("\nInforme os pontos turisticos da cidade:");
    scanf("%d",&pontos_turisticos);
    //calculo da densidade populacional
    float densidade_populacional,densidade_populacional2;

    //calculo da pib per capital
    float pib_per_capita,pib_per_capita2;

   
   

    densidade_populacional = populacao_da_cidade/area;
    pib_per_capita =  pib/populacao_da_cidade;
    
    

    printf("====CARTA====");
    printf("\nCidade:%s",cidade);
    printf("\nEstado:%s",estado);
    printf("\nCodigo:%s",codigo);
    printf("\nPopulaçao:%d",populacao_da_cidade);
    printf("\nPIB:%.2f bilhões de reais ",pib);
    printf("\nArea :%.2fkm²",area);
    printf("\nPontos turisticos:%d",pontos_turisticos);
    printf("\nDensidade Populacional:%.2f hab/km²",densidade_populacional);
    printf("\nPIB per Capita:%.2f reais",pib_per_capita);
    printf("\n=============");


    /// CARTA 2



    //cidade da carta 2
    printf( "\ndigite a cidade:");
    scanf("%s",&cidade2);



    //estado da carta 2
    printf("\nDigite o estado da cidade :");    
    scanf("%s",&estado2);


    //codigo carta 2
    printf("\nCodigo da cidade:"); 
    scanf("%s",&codigo2);


    //populacao da cidade carta 2
    printf("\nInforme a populaçao da cidade:");
    scanf("%d",&populacao_da_cidade2);

    //pib carta 2
    printf("\nInforme o pib da cidade:");
    scanf("%f",&pib2);


    // area carta 2
    printf("\nInforme a area da cidade:");
    scanf("%f",&area2);

    // pontos turisticos carta 2
    printf("\nInforme os pontos turisticos da cidade:");
    scanf("%d",&pontos_turisticos2);



    //densidade populacional e pib per capital carta 2
    densidade_populacional2 = populacao_da_cidade2/area2;
    pib_per_capita2 = pib2/populacao_da_cidade2;

    printf("====CARTA====");
    printf("\nCidade:%s",cidade2);
    printf("\nEstado:%s",estado2);
    printf("\nCodigo:%s",codigo2);
    printf("\nPopulaçao:%d",populacao_da_cidade2);
    printf("\nPIB:%.2f bilhões de reais",pib2);
    printf("\nArea :%.2fkm²",area2);
    printf("\nPontos turisticos:%d",pontos_turisticos2);
    printf("\nDensidade Populacional:%.2f hab/km²",densidade_populacional2);
    printf("\nPIB per Capita:%.2f reais",pib_per_capita2);
    printf("\n=============");

    printf("\ncomparaçao de cartas (atributo:populaçao)");
    printf("\ncarta 1-%s(%s):%d",cidade,estado,populacao_da_cidade);
    printf("\ncarta 2-%s(%s):%d",cidade2,estado2,populacao_da_cidade2);
    printf("===============");
    if(populacao_da_cidade > populacao_da_cidade2){
        printf("\ncarta 1-%s(%s)venceu!",cidade,estado);
    }   
    else{
        
        printf("\ncarta 2-%s (%s)venceu!",cidade2,estado2);
    }
    return 0;
}
