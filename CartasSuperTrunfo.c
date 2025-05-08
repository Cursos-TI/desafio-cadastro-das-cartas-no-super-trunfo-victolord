#include <stdio.h>
int main (){
    /*Variáveis carta um*/
    int npt1 /*Número de pontos turísticos*/;
    float area1, PIB1,dp1,/*Densidade populacional*/ ppc1/*PIB per capita*/, superpoder1;
    char  nc1[50]/*Nome da Cidade*/, cdc1 [50] /*Código da carta*/, estado1 /*Uma letra de "A" a "H"*/;
    unsigned long int populacao1;

    /*Variáveis carta dois*/
    int npt2 /*Número de pontos turísticos*/;
    float area2, PIB2,dp2,/*Densidade populacional*/ppc2/*PIB per capita*/, superpoder2;
    char  nc2 [50]/*Nome da Cidade*/, cdc2 [50] /*Código da carta*/, estado2 /*Uma letra de "A" a "H"*/;
    unsigned long int populacao2;

        //Entrada de dados
        printf("Seja bem vindo ao Super Trunfo!\n");
        printf("Para começar insira os dados de duas cartas...\n");  
        printf("Em sua primeira carta insira uma letra de A a H que represente um dos oito estados:\n");
        
        /*Estado*/
        scanf(" %c", &estado1);
        printf("Agora para a segunda carta:\n");
        scanf(" %c", &estado2);
        
        /*Código da carta*/
        printf("Insira o código para a primeira carta (Escolha entre as opções 01-02-03-04):\n");
        scanf(" %s", &cdc1);
        printf("Faça o mesmo para a segunda carta (Escolha entre as opções 01-02-03-04):\n");
        scanf(" %s", &cdc2);
        
        /*Nome da cidade*/
        printf("Insira o nome da cidade:\n");
        scanf(" %s", &nc1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %s", &nc2);
        
        /*População*/
        printf("Insira a população:\n");
        scanf(" %lu", &populacao1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %lu", &populacao2);
        
        /*Área*/
        printf("Insira a área em KM²:\n");
        scanf(" %f", &area1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %f", &area2);
        
        /*PIB*/
        printf("Insira PIB:\n");
        scanf(" %f", &PIB1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %f", &PIB2);
        
        /*Pontos turísticos*/
        printf("Insira número de pontos turísticos:\n");
        scanf(" %d", &npt1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %d", &npt2);
        
        //Operações 
        
        //Densidade populacional carta 1
        dp1 = (populacao1/area1);
        
        //PIB per capita carta 1
        ppc1 = (PIB1/populacao1);
        
        //Super poder carta 1
        superpoder1= (float)populacao1+ (float)area1+ (float)PIB1+ (int)npt1+ (float)ppc1+ (1.0f/dp1);
        
        //Densidade populacional carta 2
        dp2 = (populacao2/area2);
        
        //PIB per capita carta 2
        ppc2 = (PIB2/populacao2);

        //Super poder carta 2
        superpoder2= (float)populacao2+ (float)area2+ (float)PIB2+ (int)npt2+ (float)ppc2+ (1.0f/dp2);
        
        
        //Saída de dados carta 1
        printf("_________________________________________________________ \n");
        printf("Carta 1\n");
        printf("Estado: %c \n", estado1);//Estado
        printf("Código: %c%s \n", estado1, cdc1);//Codigo da carta
        printf("Nome da cidade: %s \n", nc1);//Nome da cidade
        printf("População: %d \n", populacao1);//População
        printf("Área: %.2fKM²\n", area1);//Área
        printf("PIB: %.2f \n", PIB1);//PIB
        printf("Pontos turísticos: %d \n", npt1);//Número de pontos turísticos
        printf("Densidade populacional: %.2f hab/KM² \n", dp1);//Densidade populacional
        printf("PIB per capita: %.2f Reais \n", ppc1);//PIB per capita
        printf("Super poder: %.2f\n", superpoder1);//Super poder
        
        //Saída de dados carta 2
        printf("_________________________________________________________ \n");
        printf("Carta 2\n");
        printf("Estado: %c \n", estado2);//Estado
        printf("Código: %c%s \n", estado2, cdc2);//Codigo da carta
        printf("Nome da cidade: %s \n", nc2);//Nome da cidade
        printf("População: %d \n", populacao2);//População
        printf("Área: %.2fKM²\n", area2);//Área
        printf("PIB: %.2f \n", PIB2);//PIB
        printf("Pontos turísticos: %d \n", npt2);//Número de pontos turísticos
        printf("Densidade populacional: %.2f hab/KM² \n", dp2);//Densidade populacional
        printf("PIB per capita: %.2f Reais \n", ppc2);//PIB per capita
        printf("Super poder: %.2f\n", superpoder2);//Super poder
       
        //Variáveis de comparações carta 1
        float cp1/*comparação população*/, ca1/*comparação área*/, cpb1/*comparação pib*/, ct1/*comparação pontos turísticos*/, cd1/*comparação densidade*/, cpp1/*comparação pib per capta*/, cs1/*comparação super poder*/;

        //Variáveis de comparações carta 2
        float cp2/*comparação população*/, ca2/*comparação área*/, cpb2/*comparação pib*/, ct2/*comparação pontos turísticos*/, cd2/*comparação densidade*/, cpp2/*comparação pib per capta*/, cs2/*comparação super poder*/;

        //Comparações carta 1
        cp1= populacao1>populacao2;
        ca1= area1>area2;
        cpb1= PIB1>PIB2;
        ct1= npt1>npt2;
        cd1= dp1<dp2;
        cpp1= ppc1>ppc2;
        cs1= superpoder1>superpoder2;
         
        //Comparações carta 2
         cp2= populacao2>populacao1;
         ca2= area2>area1;
         cpb2= PIB2>PIB1;
         ct2= npt2>npt1;
         cd2= dp2<dp1;
         cpp2= ppc2>ppc1;
         cs2= superpoder2>superpoder1;
 
        //variáveis resultado final cartas
        int resultadoc1/*carta 1*/, resultadoc2/*carta 2*/;

        //Soma dos resultados
        resultadoc1=(float)cp1+ (float)ca1+ (float)cpb1+ (float)ct1+ (float)cd1+ (float)cpp1+ (float)cs1;
        resultadoc2=(float)cp2+ (float)ca2+ (float)cpb2+ (float)ct2+ (float)cd2+ (float)cpp2+ (float)cs2;

        //Comparação dos resultados
        printf("_____________________________|0=NÃO|1=SIM|____________________________ \n");
        printf("Carta um venceu!(%d)\n", resultadoc1>resultadoc2);
        printf("Carta dois venceu!(%d)\n", resultadoc2>resultadoc1);



        

        
      return 0;


}