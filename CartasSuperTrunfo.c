#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigodecarta [50];
char nomedacidade [50];
int população;
float areaemkm²;
float pib;
int pontosturisticos;
  // Área para entrada de dados
printf("Estado: \n");
scanf("%c", &estado);

printf("Codigo da carta: \n");
scanf("%s", &codigodecarta);

printf("Nome da cidade: \n");
scanf("%s", &nomedacidade);

printf("População: \n");
scanf("%d", &população);

printf("Area em Km²: \n");
scanf("%f", &areaemkm²);

printf("PIB: \n");
scanf("%f", &pib);

printf("Numero de pontos turisticos: \n");
scanf("%d", &pontosturisticos);

// Área para exibição dos dados da cidade
printf("Estado: %c \n", estado);
printf("Codigo de Carta: %s \n", codigodecarta);
printf("Nome da Cidade: %s \n", nomedacidade);
printf("Polulacão Civil: %d \n", população);
printf("Area em km²: %f  Km² \n", areaemkm²);
printf("PIB: %f Bilhões de Reais \n", pib);
printf("NUmeros de Turistas: %d \n", pontosturisticos);

return 0;
} 
