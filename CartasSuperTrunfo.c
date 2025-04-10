#include <stdio.h>
int main (){
    /*Variáveis carta um*/
    int npt1 /*Número de pontos turísticos*/, populacao1;
    float area1, PIB1;
    char  nc1 [50]/*Nome da Cidade*/, cdc1 [50] /*Código da carta*/, estado1 [50] /*Uma letra de "A" a "H"*/;

    /*Variáveis carta dois*/
    int npt2 /*Número de pontos turísticos*/, populacao2;
    float area2, PIB2;
    char  nc2 [50]/*Nome da Cidade*/, cdc2 [50] /*Código da carta*/, estado2 [50] /*Uma letra de "A" a "H"*/;
        /*ENTRADA DE DADOS CARTA UM E DOIS*/
        printf("Seja bem vindo ao Super Trunfo!\n");
        printf("Para começar insira os dados de duas cartas...\n");  
        printf("Em sua primeira carta insira uma letra de A a H que represente um dos oito estados:\n");
        /*Estado*/
        scanf(" %c", &estado1);
        printf("Agora para a segunda carta:\n");
        scanf(" %c", &estado2);
        /*Código da carta*/
        printf("Insira o código para a primeira carta (Escolha entre as opções 01-02-03-04):\n");
        scanf("%s", &cdc1);
        printf("Faça o mesmo para a segunda carta (Escolha entre as opções 01-02-03-04):\n");
        scanf("%s", &cdc2);
    return 0;
}
