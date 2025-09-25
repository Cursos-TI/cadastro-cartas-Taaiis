#include <stdio.h>


int main (){
  //Váriaveis para carta 1
   char estado1;//representando um dos oito estados, apenas uma letra entre A a H;
   char codigo_da_carta1 [4];//a letra do estado seguida de um número de 01 a 04;
   char nome_da_cidade1 [50];
   int  numeros_de_pontos_turisticos1, habitantes1;
   float densidade_populacional1, pib_per_capita1, area_da_cidade1, pib1;
  

   //Váriaveis para carta 2
   char estado2;//representando um dos oito estados, apenas uma letra entre A a H;
   char codigo_da_carta2 [4];//a letra do estado seguida de um número de 01 a 04;
   char nome_da_cidade2 [50];
   int  numeros_de_pontos_turisticos2, habitantes2;
   float densidade_populacional2, pib_per_capita2, area_da_cidade2, pib2;
  
   
   


    printf ("***** Super Trunfo de cidades *****\n\n\n");
    printf ("   Vamos lá!\n\n ");
    printf ("   GO!   \n\n");
    printf ("== Carta 1 ==\n\n");


    printf ("Digite o estado de sua carta:\n");
    scanf (" %c", &estado1);


    printf ("Digite o código da carta:\n");
    scanf (" %s", codigo_da_carta1);
    

    printf ("Digite o nome da cidade:\n");
    scanf (" %[^\n]", nome_da_cidade1);


    printf ("Digite o número de habitantes:\n");
    scanf ("%d", &habitantes1);


    printf ("Digite o número de pontos turísticos:\n");
    scanf ("%d", &numeros_de_pontos_turisticos1);


    printf ("Digite a área da cidade:\n");
    scanf ("%f", &area_da_cidade1);


    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib1);



   densidade_populacional1 = (float) habitantes1 / area_da_cidade1;
   pib_per_capita1 = pib1 / (float) habitantes1;

   printf ("Densidade populacional é: %.2f hab/km²\n", densidade_populacional1);
   printf ("PIB per capita é: %.2f reais\n", pib_per_capita1);


   
    printf ("\n\n");
  


    printf ("***** Vamos para a carta 2! *****\n\n");
    printf("== Carta 2 ==\n\n");

    printf ("Digite o estado de sua carta:\n");
    scanf (" %c", &estado2 );


    printf ("Digite o código da carta:\n");
    scanf (" %s", codigo_da_carta2);

   
  
    printf ("Digite o nome da cidade:\n");
    scanf (" %[^\n]", nome_da_cidade2);

   

    printf ("Digite o número de habitantes:\n");
    scanf ("%d", &habitantes2);

   

    printf ("Digite o número de pontos turísticos:\n");
    scanf (" %d", &numeros_de_pontos_turisticos2);

   

    printf ("Digite a área da cidade:\n");
    scanf (" %f", &area_da_cidade2);

   

    printf ("Digite o PIB da cidade:\n");
    scanf (" %f", &pib2);


    
   densidade_populacional2 = (float) habitantes2 / area_da_cidade2;
   pib_per_capita2 = pib2 /(float) habitantes2 ;


   printf ("Densidade populacional é: %.2f hab/km²\n", densidade_populacional2);
   printf ("PIB per capita é : %.2f reais\n", pib_per_capita2);




    printf ("\n\n");
    printf ("--- Fim do jogo! ---\n\n\n");

 


    return 0;


//fim do programa
   


}

        
