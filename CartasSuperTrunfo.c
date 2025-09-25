#include <stdio.h>


int main (){
  //Váriaveis para carta 1
   char estado1;//representando um dos oito estados, apenas uma letra entre A a H;
   char codigo_da_carta1 [4];//a letra do estado seguida de um número de 01 a 04;
   char nome_da_cidade1 [50];
   int  numeros_de_pontos_turisticos1;
   float densidade_populacional1, pib_per_capita1, area_da_cidade1, pib1;
   unsigned long int habitantes1;
   float SuperPoder1;
   int EscolhaJogador1;

   //Váriaveis para carta 2
   char estado2;//representando um dos oito estados, apenas uma letra entre A a H;
   char codigo_da_carta2 [4];//a letra do estado seguida de um número de 01 a 04;
   char nome_da_cidade2 [50];
   int  numeros_de_pontos_turisticos2;
   float densidade_populacional2, pib_per_capita2, area_da_cidade2, pib2;
   unsigned long int habitantes2;
   float SuperPoder2;
   int EscolhaJogador2;

   printf ("=======================================\n");
   printf ("***** SUPER TRUNFO DE CIDADES *****\n");
   printf ("=======================================\n");
    printf ("   Vamos lá!\n\n ");
    printf ("   GO!   \n\n");
    printf ("=== Carta 1 ===\n\n");


    printf ("Digite o estado de sua carta (ex: A-H):\n");
    scanf (" %c", &estado1);


    printf ("Digite o código da carta (ex: A01):\n");
    scanf (" %s", codigo_da_carta1);
    

    printf ("Digite o nome da cidade:\n");
    scanf (" %[^\n]", nome_da_cidade1);


    printf ("Digite o número de habitantes:\n");
    scanf ("%lu", &habitantes1);


    printf ("Digite o número de pontos turísticos:\n");
    scanf ("%d", &numeros_de_pontos_turisticos1);


    printf ("Digite a área da cidade (km²):\n");
    scanf ("%f", &area_da_cidade1);


    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib1);

  
   
   printf ("\n\n");
  


    printf ("***** Vamos para a carta 2! *****\n\n");
    printf("=== Carta 2 ===\n\n");

    printf ("Digite o estado de sua carta (A-H):\n");
    scanf (" %c", &estado2 );
    getchar();

    printf ("Digite o código da carta (ex: A01):\n");
    scanf (" %s", codigo_da_carta2);
    getchar();
  
    printf ("Digite o nome da cidade:\n");
    scanf (" %[^\n]", nome_da_cidade2);
    getchar();
   

    printf ("Digite o número de habitantes:\n");
    scanf ("%lu", &habitantes2);

   
    printf ("Digite o número de pontos turísticos:\n");
    scanf (" %d", &numeros_de_pontos_turisticos2);

   
    printf ("Digite a área da cidade (km²):\n");
    scanf (" %f", &area_da_cidade2);


    printf ("Digite o PIB da cidade:\n");
    scanf (" %f", &pib2);

    //CÁLCULOS DOS ATRIBUTOS

    densidade_populacional1 = (float) habitantes1 / area_da_cidade1;
    pib_per_capita1 = pib1 / (float) habitantes1;
    SuperPoder1 = (float) habitantes1 + (float) numeros_de_pontos_turisticos1 + 1/densidade_populacional1 + pib_per_capita1 + area_da_cidade1 + pib1;

    densidade_populacional2 = (float) habitantes2 / area_da_cidade2;
    pib_per_capita2 = pib2 /(float) habitantes2 ;
    SuperPoder2 = (float) habitantes2 + (float) numeros_de_pontos_turisticos2 + 1/densidade_populacional2 + pib_per_capita2 + area_da_cidade2 + pib2;

    printf("Carta 1 (%s): Densidade %.2f hab/km², PIB per Capita R$%.2f\n", nome_da_cidade1, densidade_populacional1, pib_per_capita1);
    printf("Carta 2 (%s): Densidade %.2f hab/km², PIB per Capita R$%.2f\n", nome_da_cidade2, densidade_populacional2, pib_per_capita2);
    printf("\n\n____ CARTAS PRONTAS PARA A BATALHA! ____\n\n");


   //LÓGICA DO JOGO (BATALHA)


   
   printf("Jogador 1, escolha o atributo para comparar: \n");
   printf("1- Habitantes\n");
   printf("2- Pontos Turísticos\n");
   printf("3- Área da Cidade\n");
   printf("4- PIB\n");
   printf("5- Densidade Populacional (menor vence)\n");
   printf("6- PIB per Capita\n");
   printf("7- Super Poder\n");
   printf("Sua escolha: ");
   scanf("%d", &EscolhaJogador1);

   


   if (EscolhaJogador1 == 1) {
    int resultado = (habitantes1 > habitantes2);
    printf("Resultado da Comparacao (1 = Vitoria da Carta 1): %d\n", resultado);

        printf("\n --- Comparando o número de Habitantes ---\n");
    if (habitantes1 > habitantes2) {
        printf ("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1);
    } else if (habitantes1 < habitantes2) {
        printf ("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);
    } else {
        printf("Empate!\n");
  }
   

}   else if (EscolhaJogador1 == 2) {
     int resultado = (numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2);
     printf("Resultado da Comparacao (1 = Vitoria da Carta 1): %d\n", resultado);

    printf("\n --- Comparando o número de Pontos Turísticos ---\n");
   if (numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2) { 
    printf("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1); 
  } else if (numeros_de_pontos_turisticos1 < numeros_de_pontos_turisticos2) { 
    printf("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);  
  }else {
    printf("Empate!\n"); 
    
   }

  } else if (EscolhaJogador1 == 3) {
    int resultado = (area_da_cidade1 > area_da_cidade2);
    printf("Resultado da Comparacao (1 = Vitoria da Carta 1): %d\n", resultado);

      printf("\n --- Comparando a Área da Cidade ---\n");
    if(area_da_cidade1 > area_da_cidade2) {
      printf("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1);
    } else if (area_da_cidade1 < area_da_cidade2) {
      printf("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);
    } else {
      printf("Empate!\n");
    }

  } else if (EscolhaJogador1 == 4 ) {
    int resultado = (pib1 > pib2);
      printf("Resultado da Comparaçao (1 = Vitoria da Carta 1): %d\n", resultado);

      printf("\n --- Comparando o PIB ---\n");
    if(pib1 > pib2) {
      printf("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1);
  } else if (pib1 < pib2) {
      printf("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);
  } else {
      printf ("empate!\n");
    }

  } else if (EscolhaJogador1 == 5) {
    int resultado = (densidade_populacional1 < densidade_populacional2);
      printf("Resultado da Comparacao (1 = Vitoria da Carta 1): %d\n", resultado);

      printf("\n --- Comparando a Densidade Populacional1 ---\n");
    if(densidade_populacional1 < densidade_populacional2) {
      printf("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1);
  } else if (densidade_populacional1 > densidade_populacional2) {
      printf("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);
  } else {
      printf("EMPATE!\n");
    }
  
  } else if (EscolhaJogador1 == 6) {
    int resultado = (pib_per_capita1 > pib_per_capita2);
    printf("Resultado da Comparacao (1 = Vitoria da Carta 1): %d\n", resultado);

      printf("\n --- Comparando o PIB per Capita ---\n");
    if(pib_per_capita1 > pib_per_capita2) {
      printf("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1);
  } else if(pib_per_capita1 < pib_per_capita2) {
      printf("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);
  } else{
      printf("EMPATE!\n");
      }
      
  } else if (EscolhaJogador1 == 7) {
      int resultado = (SuperPoder1 > SuperPoder2);
      printf("Resultado da Comparacao (1 = Vitoria da Carta 1): %d\n", resultado);

      printf("\n--- Comparando Super Poder ---\n");
      if (SuperPoder1 > SuperPoder2) {
            printf("VENCEDOR: %s (Carta 1)\n", nome_da_cidade1);
  } else if (SuperPoder1 < SuperPoder2) {
      printf("VENCEDOR: %s (Carta 2)\n", nome_da_cidade2);
  } else {
      printf("EMPATE!\n");
        }
  } else {
      printf("\nEscolha inválida! Ninguem venceu essa rodada.\n");
      }


       printf ("\n\n--- Fim do jogo! ---\n\n\n");
   

   
    return 0;



//fim do programa
   


}

        
