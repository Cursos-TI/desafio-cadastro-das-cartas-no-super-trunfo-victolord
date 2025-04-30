#include <stdio.h>
int main (){
    /*Variáveis carta um*/
    int npt1 /*Número de pontos turísticos*/, populacao1;
    float area1, PIB1;
    char  nc1 [50]/*Nome da Cidade*/, cdc1 [50] /*Código da carta*/, estado1  /*Uma letra de "A" a "H"*/;

    /*Variáveis carta dois*/
    int npt2 /*Número de pontos turísticos*/, populacao2;
    float area2, PIB2;
    char  nc2 [50]/*Nome da Cidade*/, cdc2 [50] /*Código da carta*/, estado2  /*Uma letra de "A" a "H"*/;
        /*ENTRADA DE DADOS CARTA UM E DOIS*/
        printf("Seja bem vindo ao Super Trunfo!\n");
        printf("Para começar insira os dados de duas cartas...\n");  
        /*Estado*/
        printf("Em sua primeira carta insira uma letra de A a H que represente um dos oito estados:\n");
        scanf(" %c", &estado1);
        printf("Agora para a segunda carta:\n");
        scanf(" %c", &estado2);
        /*Código da carta*/
        printf("Insira o código para a primeira carta (Escolha entre as opções 01-02-03-04):\n");
        scanf("%s", &cdc1);
        printf("Faça o mesmo para a segunda carta (Escolha entre as opções 01-02-03-04):\n");
        scanf("%s", &cdc2);
        /*Nome da cidade*/
        printf("Escreva o nome da cidade da primeira carta:\n");
        scanf(" %s", &nc1);
        printf("Agora escreva o nome da cidade da segunda carta:\n");
        scanf(" %s", &nc2);
        /*População*/
        printf("Escreva O número de habitantes da cidade da primeira carta:\n");
        scanf(" %d", &populacao1);
        printf("Escreva O número de habitantes da cidade da segunda carta:\n");
        scanf(" %d", &populacao2);
        /*Área*/
        printf("Escreva a área em KM² para a primeira carta:\n");
        scanf(" %f", &area1);
        printf("Escreva a área em KM² para a segunda carta:\n");
        scanf(" %f", &area2);
        /*PIB*/
        printf("Insira o PIB da primeira carta:\n");
        scanf(" %f", &PIB1);
        printf("Insira o PIB da segunda carta:\n");
        scanf(" %f", &PIB2);
        /*Número de pontos turísticos*/
        printf("Escreva o número de pontos turísticos da primeira carta:\n");
        scanf(" %d", &npt1);
        printf("Escreva o número de pontos turísticos da segunda carta:\n");
        scanf(" %d", &npt2);
        /*Saída de dados*/ /*Carta 1*/
        printf("| Carta 1 |\n");
        printf("Estado: %c \n", estado1);
        printf("Código da carta: %c%s\n", estado1, cdc1);
        printf("Nome da cidade:%s\n", nc1);
        printf("População:%d\n", populacao1);
        printf("Área:%fM²\n", area1);
        printf("PIB:R$%f\n", PIB1);
        printf("Número de pontos turísticos:%d\n", npt1);
        printf("_______________________________________\n");
         /*Saída de dados*/ /*Carta 2*/
        printf("| Carta 2 |\n");
        printf("Estado: %c \n", estado2);
        printf("Código da carta: %c%s\n", estado2, cdc2);
        printf("Nome da cidade:%s\n", nc2);
        printf("População:%d\n", populacao2);
        printf("Área:%fM²\n", area2);
        printf("PIB:R$%f\n", PIB2);
        printf("Número de pontos turísticos:%d\n", npt2);
        printf("_______________________________________\n");
        
    return 0;
}
