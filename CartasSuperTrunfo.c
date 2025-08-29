#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
char estado_1, estado_2; //Variavel que vai utilizar uma letar de A a H representando um dos 8 estados tipo Char
char cod_carta_1[4]; //Variavel do tipo char para amarzenar o codigo da carta seguido de um numero de 01 a 04
char cod_carta_2[4]; //Variavel do tipo char para amarzenar o codigo da carta seguido de um numero de 01 a 04
char nome_cidade_1[50]; //Variavel que armazenara o nome da Cidade
char nome_cidade_2[50]; //Variavel que armazenara o nome da Cidade
int populacao_1; //Variavel que vai concentrar numero de habitantes
int populacao_2; //Variavel que vai concentrar numero de habitantes
int num_pontos_turisticos_1; //Variavel que vai concentrar numero de pontos turisticos
int num_pontos_turisticos_2; //Variavel que vai concentrar numero de pontos turisticos
float pib_1; //Variavel que armazenara o PIB da cidade e a area que ela possui
float pib_2; //Variavel que armazenara o PIB da cidade e a area que ela possui
float area_1; //Variavel que armazenara o area da cidade e a area que ela possui
float area_2; //Variavel que armazenara o area da cidade e a area que ela possui

printf("Carta 1 \nDigite uma Letra (A a H) representando um dos 8 estados \n");
scanf("%c", &estado_1);
printf("Digite o Codigo da Carta (01 a 04) junto com a letra do estado escolhido \n");
scanf("%s", cod_carta_1);
printf("Digite o nome da Cidade \n");
scanf("%s", nome_cidade_1);
printf("Digite a População \n");
scanf("%d", &populacao_1);
printf("Digite a Area da Cidade Escolhida \n");
scanf("%f", &area_1);
printf("Digite o PIB \n");
scanf("%f", &pib_1);
printf("Digite quantos pontos turisticos tem a cidade \n");
scanf("%d", &num_pontos_turisticos_1);

printf("\nCarta 2 \nDigite uma Letra (A a H) representando um dos 8 estado \n");
scanf(" %c", &estado_2);
printf("Digite o Codigo da Carta (01 a 04) junto com a letra do estado escolhido \n");
scanf("%s", cod_carta_2);
printf("Digite o nome da Cidade \n");
scanf("%s", nome_cidade_2);
printf("Digite a População \n");
scanf("%d", &populacao_2);
printf("Digite a Area da Cidade Escolhida \n");
scanf("%f", &area_2);
printf("Digite o PIB \n");
scanf("%f", &pib_2);
printf("Digite quantos pontos turisticos tem a cidade \n");
scanf("%d", &num_pontos_turisticos_2);


printf("\n");
printf("Carta 1 \nEstado: %c\nCodigo da Carta: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %0.2f\nPIB: %0.2f\nPontos Turisticos: %d\n", estado_1, cod_carta_1, nome_cidade_1, populacao_1, area_1, pib_1, num_pontos_turisticos_1);

printf("\n");
printf("Carta 2 \nEstado: %c\nCodigo da Carta: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %0.2f\nPIB: %0.2f\nPontos Turisticos: %d\n", estado_2, cod_carta_2, nome_cidade_2, populacao_2, area_2, pib_2, num_pontos_turisticos_2);

    return 0;
}
