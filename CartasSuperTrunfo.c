#include <stdio.h>


int main (){
   char estado [8];//representando um dos oito estados, apenas uma letra entre A a H;
   char codigo_da_carta [8] [4];//a letra do estado seguida de um número de 01 a 04;
   char nome_da_cidade [50];
   int habitantes, numeros_de_pontos_turisticos;
   float area_da_cidade, PIB;


    printf ("Super Trunfo de cidades\n\n\n");
    printf ("Vamos lá!\n\n");
    printf ("GO!\n\n");
    printf ("Carta 1\n\n");



    printf ("Digite o estado de sua carta:\n");
    scanf (" %c", &estado);

    while (getchar() != '\n');

    printf ("Digite o código da carta:\n");
    scanf ("%s", codigo_da_carta);
    
    while (getchar() != '\n');

    printf ("Digite o nome da cidade:\n");
    scanf (" %s", &nome_da_cidade);

    printf ("Digite o número de habitantes:\n");
    scanf ("%d", &habitantes);

    printf ("Digite o número de pontos turísticos:\n");
    scanf ("%d", &numeros_de_pontos_turisticos);

    printf ("Digite a área da cidade:\n");
    scanf ("%f", &area_da_cidade);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &PIB);
    printf ("\n\n");



    printf ("Vamos para a carta 2!\n\n");
    printf("CARTA 2\n\n");

    printf ("Digite o estado de sua carta:\n");
    scanf (" %c", &estado);

      while (getchar() != '\n');

    printf ("Digite o código da carta:\n");
    scanf ("%s", &codigo_da_carta);

      while (getchar() != '\n');

    printf ("Digite o nome da cidade:\n");
    scanf (" %s", &nome_da_cidade);

    printf ("Digite o número de habitantes:\n");
    scanf ("%d", &habitantes);

    printf ("Digite o número de pontos turísticos:\n");
    scanf ("%d", &numeros_de_pontos_turisticos);

    printf ("Digite a área da cidade:\n");
    scanf ("%f", &area_da_cidade);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &PIB);


    printf ("\n\n");
    printf ("Fim do jogo!\n\n\n");

 


    return 0;


//fim do programa
   


}
    

        
