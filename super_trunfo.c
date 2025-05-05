#include <stdio.h>
#include <string.h>

int main (){
    
    char estado1[3];
    char estado2[3];
    char idcarta1[5];
    char idcarta2[5];
    char codigo1[10];
    char codigo2[10];
    char cidade1[50];
    char cidade2[50];
    int populacao1,populacao2, pontosturisticos1, pontosturisticos2;
    float area1,area2, pib1,pib2;
    float densidade1, densidade2,pibpercap1,pibpercap2;
    float superpoder1, superpoder2;

printf ("\n------------------------------------------------------------------\n");
printf ("Vamos começar o jogo, você deverá inserir as informações de duas cartas, uma de cada vez!\n");
printf ("Cada dado será solicitado individualmente\n");
printf ("***** CARTA 1 *****\n");

printf ("Digite o estado: \n");
scanf ("%s", estado1);
   getchar(); 
printf ("Digite o código da carta: \n");
scanf ("%s", idcarta1);
   getchar(); 
strcpy(codigo1, estado1);  
strcat(codigo1, idcarta1);  

printf ("Digite o nome da cidade: \n");
fgets (cidade1, 50, stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;


printf ("Agora digite as informações da cidade %s\n", cidade1);
printf ("Digite a polulação: \n");
scanf ("%i", &populacao1);

printf ("Digite a área (em km²): \n");
scanf ("%f", &area1);

printf ("Digite o PIB (em bilhões): \n");
scanf ("%f", &pib1);

printf ("Digite a quantidade de pontos turísticos: \n");
scanf ("%i", &pontosturisticos1);

printf ("------------------------------------------------------------------\n");
printf ("Preencha agora os dados da segunda carta\n");
printf ("***** CARTA 2 *****\n");

printf ("Digite o estado: \n");
scanf ("%s", estado2);
   getchar(); 
printf ("Digite o código da carta: \n");
scanf ("%s", idcarta2);
   getchar(); 
strcpy(codigo2, estado2);  
strcat(codigo2, idcarta2);  

printf ("Digite o nome da cidade: \n");
fgets (cidade2, 50, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

printf ("Agora digite as informações da cidade %s\n", cidade2);
printf ("Digite a polulação: \n");
scanf ("%i", &populacao2);

printf ("Digite a área (em km²): \n");
scanf ("%f", &area2);

printf ("Digite o PIB (em bilhões): \n");
scanf ("%f", &pib2);

printf ("Digite a quantidade de pontos turísticos: \n");
scanf ("%i", &pontosturisticos2);

densidade1 = (float) populacao1 / area1;
pibpercap1 = (float) ((pib1*1000000000) / populacao1);

densidade2 = (float) populacao2 / area2;
pibpercap2 = (float) ((pib2*1000000000) / populacao2);

superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercap1 + (1 / densidade1);
superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercap2 + (1 / densidade2);

printf ("------------------------------------------------------------------\n");
printf ("RESULTADO\n");
printf ("------------------------------------------------------------------\n");

printf ("***** CARTA 1 *****\n");
printf ("ESTADO: %s\n",estado1);
printf ("CÓDIGO: %s\n", codigo1);
printf ("CIDADE: %s\n", cidade1);
printf ("POPULAÇÃO: %i \n",populacao1);
printf ("ÁREA: %.2f km²\n",area1);
printf ("PIB: R$ %.2f (bilhões) \n", pib1);
printf ("PONTOS TURÍSTICOS: %i \n", pontosturisticos1);
printf ("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade1);
printf ("PIB PER CAPITA: R$ %.2f \n", pibpercap1);
printf ("SUPERPODER: %.2f\n", superpoder1);

printf ("\n------------------------------------------------------------------\n");

printf ("***** CARTA 2 *****\n");
printf ("ESTADO:%s\n",estado2);
printf ("CÓDIGO: %s\n", codigo2);
printf ("CIDADE: %s\n", cidade2);
printf ("POPULAÇÃO: %i \n",populacao2);
printf ("ÁREA: %.2f km²\n",area2);
printf ("PIB: R$ %.2f (bilhões) \n", pib2);
printf ("PONTOS TURÍSTICOS: %i \n", pontosturisticos2);
printf ("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2);
printf ("PIB PER CAPITA: R$ %.2f \n", pibpercap2);
printf ("SUPERPODER: %.2f\n", superpoder2);

printf ("------------------------------------------------------------------\n");
printf ("********* COMPARAÇÃO ENTRE CARTAS *********\n");
printf ("Na tabela abaixo está comparando duas cartas, a que o atributo estiver 1 corresponde a carta vencedora naquele atribudo!\n");
printf ("Se ambas estiverem zeradas, houve um empate.\n");
printf ("------------------------------------------------------------------\n");
printf ("ATRIBUTOS         | CARTA 1 | CARTA 2|\n");
printf ("POPULAÇÃO         |   %d     |    %d   |\n",populacao1>populacao2,populacao2>populacao1);
printf ("ÁREA              |   %d     |    %d   |\n",area1>area2,area2>area1);
printf ("PIB               |   %d     |    %d   |\n",pib1>pib2,pib2>pib1);
printf ("PONTOS TURÍSTICOS |   %d     |    %d   |\n",pontosturisticos1>pontosturisticos2,pontosturisticos2>pontosturisticos1);
printf ("DENSIDADE POPUL.  |   %d     |    %d   |\n",densidade1<densidade2,densidade2<densidade1);
printf ("PIB PER CAPITA    |   %d     |    %d   |\n",pibpercap1>pibpercap2,pibpercap2>pibpercap1);
printf ("SUPERPODER        |   %d     |    %d   |\n",superpoder1>superpoder2,superpoder2>superpoder1);

return 0;

}
