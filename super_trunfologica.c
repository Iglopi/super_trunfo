#include <stdio.h>
#include <string.h>

int main (){
    

    char pais1[50];
    char pais2[50];
    int populacao1,populacao2, pontosturisticos1, pontosturisticos2,escolha1, escolha2,resultadocarta1E1,resultadocarta1E2,resultadocarta2E1,resultadocarta2E2;
    int somaresultado1, somaresultado2;
    float area1,area2, pib1,pib2,carta1escolha1,carta1escolha2,carta2escolha1,carta2escolha2,somacarta1,somacarta2;
    float densidade1, densidade2;

printf ("\n------------------------------------------------------------------\n");
printf ("Vamos começar o jogo, você deverá inserir as informações de duas cartas, uma de cada vez!\n");
printf ("Cada dado será solicitado individualmente\n");
printf ("***** CARTA 1 *****\n");
   
printf ("Digite o nome do Pais: \n");
fgets (pais1, 50, stdin);
  pais1[strcspn(pais1, "\n")] = 0;

printf ("Agora digite as informações da pais %s\n", pais1);
printf ("Digite a polulação: \n");
scanf ("%i", &populacao1);

printf ("Digite a área (em km²): \n");
scanf ("%f", &area1);

printf ("Digite o PIB (em bilhões): \n");
scanf ("%f", &pib1);

printf ("Digite a quantidade de pontos turísticos: \n");
scanf ("%i", &pontosturisticos1);

printf ("***** CARTA 2 *****\n");

getchar();

printf ("Digite o nome do Pais: \n");
fgets (pais2, 50, stdin);

pais2[strcspn(pais2, " \n")] = 0; 

printf ("Digite a polulação: \n");
scanf ("%i", &populacao2);

printf ("Digite a área (em km²): \n");
scanf ("%f", &area2);

printf ("Digite o PIB (em bilhões): \n");
scanf ("%f", &pib2);

printf ("Digite a quantidade de pontos turísticos: \n");
scanf ("%i", &pontosturisticos2);

densidade1 = (float) populacao1 / area1;
densidade2 = (float) populacao2 / area2;


printf ("------------------------------------------------------------------\n");
printf ("VOCÊ ESCOLHERÁ UMA OPÇÃO PARA REALIZAR A COMPARAÇÃO DE ATRIBUTOS E DECIDIR QUEM SAIRÁ VENCEDOR! \n");
printf ("##################  ATRIBUTO 1  ################## \n");
printf ("DIGITE UM NÚMERO DO MENU ABAIXO PARA ESCOLHER O ATRIBUIDO RELACIONADO AO NÚMERO \n");
printf ("1 - POPULAÇÃO \n");
printf ("2 - ÁREA \n");
printf ("3 - PIB \n");
printf ("4 - NÚMERO DE PONTOS TURÍSTICOS \n");
printf ("5 - DENSIDADE DEMOGRÁFICA \n");
printf ("ESCOLHA... \n");
scanf("%d", &escolha1);

switch (escolha1){
   case 1:
   printf("O atributo escolhido foi: - POPULAÇÃO \n");
   printf("Carta 1 - Pais:%s - População: %i\n", pais1,populacao1);
   printf("Carta 2 - Pais:%s - População: %i\n", pais2,populacao2);
    carta1escolha1 = populacao1;
    carta2escolha1 = populacao2;
        
   break;

   case 2:
   printf("O atributo escolhido foi: - ÁREA \n");
   printf("Carta 1 - Pais: %s - Área: %f\n", pais1,area1);
   printf("Carta 2 - Pais: %s - Área: %f\n", pais2,area2);
    carta1escolha1 = area1;
    carta2escolha1 = area2;

   break;

   case 3:
   printf("O atributo escolhido foi: - PIB \n");
   printf("Carta 1 - Pais: %s - PIB: %f\n", pais1,pib1);
   printf("Carta 2 - Pais: %s - PIB: %f\n", pais2,pib2);
    carta1escolha1 = pib1;
    carta2escolha1 = pib2;
    break;

   case 4:
   printf("O atributo escolhido foi: - NÚMERO DE PONTOS TURÍSTICOS \n");
   printf("Carta 1 - Pais: %s - Número de pontos turísticos: %i\n", pais1,pontosturisticos1);
   printf("Carta 2 - Pais: %s - Número de pontos turísticos: %i\n", pais2,pontosturisticos2);
    carta1escolha1 = pontosturisticos1;
    carta2escolha1 = pontosturisticos2;

   break;

   case 5:
   printf("O atributo escolhido foi: - DENSIDADE DEMOGRÁFICA \n");
   printf("Carta 1 - Pais: %s - Densidade demográfica: %f\n", pais1,densidade1);
   printf("Carta 2 - Pais: %s - Densidade demográfica: %f\n", pais2,densidade2);
   carta1escolha1 = densidade1;
   carta2escolha1 = densidade2;
   break;

default:
printf("Opção Inválida !!\n");
   break;
}


printf ("VOCÊ ESCOLHERÁ A OUTRA OPÇÃO PARA REALIZAR A COMPARAÇÃO DE ATRIBUTOS E DECIDIR QUEM SAIRÁ VENCEDOR! \n");
printf ("##################  ATRIBUTO 2  ################## \n");
printf ("DIGITE UM NÚMERO DO MENU ABAIXO PARA ESCOLHER O ATRIBUIDO RELACIONADO AO NÚMERO \n");

if (escolha1 == 1)
{
    printf ("2 - ÁREA \n");
    printf ("3 - PIB \n");
    printf ("4 - NÚMERO DE PONTOS TURÍSTICOS \n");
    printf ("5 - DENSIDADE DEMOGRÁFICA \n");
    printf ("ESCOLHA... \n");
    scanf("%d", &escolha2);
    
} else if (escolha1 ==2) {
    printf ("1 - POPULAÇÃO \n");
    printf ("3 - PIB \n");
    printf ("4 - NÚMERO DE PONTOS TURÍSTICOS \n");
    printf ("5 - DENSIDADE DEMOGRÁFICA \n");
    printf ("ESCOLHA... \n");
    scanf("%d", &escolha2);

} else if (escolha1 ==3) {
    printf ("1 - POPULAÇÃO \n");
    printf ("2 - ÁREA \n");
    printf ("4 - NÚMERO DE PONTOS TURÍSTICOS \n");
    printf ("5 - DENSIDADE DEMOGRÁFICA \n");
    printf ("ESCOLHA... \n");
    scanf("%d", &escolha2);

} else if (escolha1 ==4) {
    printf ("1 - POPULAÇÃO \n");
    printf ("2 - ÁREA \n");
    printf ("3 - PIB \n");
    printf ("5 - DENSIDADE DEMOGRÁFICA \n");
    printf ("ESCOLHA... \n");
    scanf("%d", &escolha2);

} else if (escolha1 ==5) {
    printf ("1 - POPULAÇÃO \n");
    printf ("2 - ÁREA \n");
    printf ("3 - PIB \n");
    printf ("4 - NÚMERO DE PONTOS TURÍSTICOS \n");
    printf ("ESCOLHA... \n");
    scanf("%d", &escolha2);
} else {
    printf ("Opção Inválida, recomece o jogo!  \n");
}

switch (escolha2){
    case 1:
    printf("O atributo escolhido foi: - POPULAÇÃO \n");
    printf("Carta 1 - Pais:%s - População: %i\n", pais1,populacao1);
    printf("Carta 2 - Pais:%s - População: %i\n", pais2,populacao2);
    carta1escolha2 = populacao1;
    carta2escolha2 = populacao2;
    break;
 
    case 2:
    printf("O atributo escolhido foi: - ÁREA \n");
    printf("Carta 1 - Pais: %s - Área: %f\n", pais1,area1);
    printf("Carta 2 - Pais: %s - Área: %f\n", pais2,area2);
    carta1escolha2 = area1;
    carta2escolha2 = area2;
    break;
 
    case 3:
    printf("O atributo escolhido foi: - PIB \n");
    printf("Carta 1 - Pais: %s - PIB: %f\n", pais1,pib1);
    printf("Carta 2 - Pais: %s - PIB: %f\n", pais2,pib2);
    carta1escolha2 = pib1;
    carta2escolha2 = pib2;
    break;

    case 4:
    printf("O atributo escolhido foi: - NÚMERO DE PONTOS TURÍSTICOS \n");
    printf("Carta 1 - Pais: %s - Número de pontos turísticos: %i\n", pais1,pontosturisticos1);
    printf("Carta 2 - Pais: %s - Número de pontos turísticos: %i\n", pais2,pontosturisticos2);
    carta1escolha2 = pontosturisticos1;
    carta2escolha2 = pontosturisticos2;
    break;
 
    case 5:
    printf("O atributo escolhido foi: - DENSIDADE DEMOGRÁFICA \n");
    printf("Carta 1 - Pais: %s - Densidade demográfica: %f\n", pais1,densidade1);
    printf("Carta 2 - Pais: %s - Densidade demográfica: %f\n", pais2,densidade2);
    carta1escolha2 = densidade1;
    carta2escolha2 = densidade2;
    break;
 
 default:
 printf("Opção Inválida !!\n");
    break;
 }
 
resultadocarta1E1 = carta1escolha1 > carta2escolha1 ? 1 : 0;
resultadocarta1E2 = carta1escolha2 > carta2escolha2 ? 1 : 0;
resultadocarta2E1 = carta2escolha1 > carta1escolha1 ? 1 : 0;
resultadocarta2E2 = carta2escolha2 > carta1escolha2 ? 1 : 0;

somaresultado1 = resultadocarta1E1 + resultadocarta1E2;
somaresultado2 = resultadocarta2E1 + resultadocarta2E2;

somacarta1 = (float) carta1escolha1 + carta1escolha2; 
somacarta2 = (float) carta2escolha1 + carta2escolha2; 


printf ("##################  RESULTADOS  ################## \n");
printf("Vencedor por atributos!! \n");
if (somaresultado1 > somaresultado2)
{
 printf("Carta 1 foi a vencedora por atributos!\n");
 
} else if (somaresultado1 < somaresultado2) {
    printf("Carta 2 foi a vencedora por atributos!\n");
} else {
    printf("As cartas empararam na comparação por atributos!\n");
}


printf("Vencedor por soma dos valores!! \n");
if (somacarta1 > somacarta2)
{
 printf("Carta 1 foi a vencedora por atributos!\n");
} else if (somacarta1 < somacarta2) {
    printf("Carta 2 foi a vencedora por atributos!\n");
} else {
    printf("As cartas empararam na comparação por soma das cartas\n");
}

return 0;

}
