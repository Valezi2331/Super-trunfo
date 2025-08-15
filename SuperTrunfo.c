#include <stdio.h>

int main(){

char estado1;
char cod1[10];
char cidade1[10];
int populacao1;
float area1;
float pib1;
int turistico1;

char estado2;
char cod2[10];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int turistico2;

printf("Vamos introudzir os dados da carta 1\n");

printf("Insira o estado(A a H) \n");
scanf(" %c", &estado1);

printf("Insira o código da carta \n");
scanf("%s", cod1);

printf("Insira a cidade \n");
scanf("%s", cidade1);

printf("Insira a população \n");
scanf("%d", &populacao1);

printf("Insira a área da cidade \n");
scanf("%f", &area1);

printf("Insira o PIB \n");
scanf("%f", &pib1);

printf("Insira a quantidade de pontos jurídicos \n");
scanf("%d", &turistico1);

printf("Agora vamos fazer a carta 2 \n");

printf("Insira o estado(A a H) \n");
scanf(" %c", &estado2);

printf("Insira o código da carta \n");
scanf(" %s", cod2);

printf("Insira a cidade \n");
scanf("%s", cidade2);

printf("Insira a população \n");
scanf("%d", &populacao2);

printf("Insira a área da cidade \n");
scanf("%f", &area2);

printf("Insira o PIB \n");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos jurídicos \n");
scanf("%d", &turistico2);



float densidade1;
float densidade2;

densidade1= (populacao1 / area1);
densidade2= (populacao2 / area2);



float pibcapita1;
float pibcapita2;

pibcapita1= (pib1 / populacao1);
pibcapita2= (pib2 / populacao2);    



printf("Informações da carta 1 \n");
printf("Estado: %c \n", estado1);
printf("Código: %s \n", cod1);
printf("Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Quantidade de pontos turísticos: %d \n", turistico1);
printf("Densidade populacional: %f \n", densidade1);
printf("Pib per Capita: %f \n ", pibcapita1);
printf("\n"); 

printf("Informações da carta 2 \n");
printf("Estado: %c \n", estado2);
printf("Código: %s \n", cod2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Quantidade de pontos turísticos: %d \n", turistico2);
printf("Densidade populacional: %f \n", densidade2);
printf("Pib per Capita: %f \n ", pibcapita2);

}
