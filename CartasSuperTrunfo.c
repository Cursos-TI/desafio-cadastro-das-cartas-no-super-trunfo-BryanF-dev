#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Bem Vindos ao Jogo Super Trunfo (Paises) \n");  //Titulo do jogo!
   

printf("Cadastro de Estado e Cidades \n"); //Introdução

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_da_cidade [20];
    char estado [20];
    char cidade_1[20];
    char cidade_2[20];
    char cidade_3[20];
    char cidade_4[20];
    float populacao_1;
    float populacao_2;
    float populacao_3;
    float populacao_4;
    float area_1;
    float area_2;
    float area_3;
    float area_4;
    float pib_1;
    float pib_2;
    float pib_3;
    float pib_4;
    int numero_pontos_turisticos_1;
    int numero_pontos_turisticos_2;
    int numero_pontos_turisticos_3;
    int numero_pontos_turisticos_4;

      

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
printf("Carta 01 \n");

printf("\n");

    printf("Estado? \n");
    scanf ("%s" ,&estado);

printf("\n");


    printf("Cidade A01? \n");
    scanf("%s" ,&cidade_1);
    printf("População ?\n");
    scanf("%f" ,&populacao_1);
    printf("Área? \n");
    scanf("%f" ,&area_1);
    printf("PIB? \n");
    scanf("%f" ,&pib_1);
    printf("N° Pontos Turisticos? \n");
    scanf("%d" ,&numero_pontos_turisticos_1);

printf("\n");
     
    printf("Cidade A02? \n");
    scanf("%s" ,&cidade_2);
    printf("População ?\n");
    scanf("%f" ,&populacao_2);
    printf("Área? \n");
    scanf("%f" ,&area_2);
    printf("PIB? \n");
    scanf("%f" ,&pib_2);
    printf("N° Pontos Turisticos? \n");
    scanf("%d" ,&numero_pontos_turisticos_2);

printf("\n");
     
    printf("Cidade A03? \n");
    scanf("%s" ,&cidade_3);
    printf("População ?\n");
    scanf("%f" ,&populacao_3);
    printf("Área? \n");
    scanf("%f" ,&area_3);
    printf("PIB? \n");
    scanf("%f" ,&pib_3);
    printf("N° Pontos Turisticos? \n");
    scanf("%d" ,&numero_pontos_turisticos_3);
    
    printf("\n");

     
    printf("Cidade A04? \n");
    scanf("%s" ,&cidade_4);
    printf("População ?\n");
    scanf("%f" ,&populacao_4);
    printf("Área? \n");
    scanf("%f" ,&area_4);
    printf("PIB? \n");
    scanf("%f" ,&pib_4);
    printf("N° Pontos Turisticos? \n");
    scanf("%d" ,&numero_pontos_turisticos_4);
    
    printf("\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 
    printf("Estado 1 : %s \n" ,estado);
    
    printf("\n");
    printf("\n");

    printf("Cidade A01: %s \n" ,cidade_1);
    printf("População : %f \n" ,populacao_1);
    printf("Área : %f \n" ,area_1);
    printf("PIB : %f \n" ,pib_1);
    printf("N° De Pontos Turisticos : %d \n" ,numero_pontos_turisticos_1);

printf("\n");
    
    printf("Cidade A02: %s \n" ,cidade_2);
    printf("População : ¨%f \n" ,populacao_2);
    printf("Área : %f \n" ,area_2);
    printf("PIB : %f \n" ,pib_2);
    printf("N° De Pontos Turisticos : %d \n" ,numero_pontos_turisticos_2);

    printf("\n");
      
    printf("Cidade B01: %s \n" ,cidade_3);
    printf("População : ¨%f \n" ,populacao_3);
    printf("Área : %f \n" ,area_3);
    printf("PIB : %f \n" ,pib_3);
    printf("N° De Pontos Turisticos : %d \n" ,numero_pontos_turisticos_3);

printf("\n");
  
    printf("Cidade B02: %s \n" ,cidade_4);
    printf("População : ¨%f \n" ,populacao_4);
    printf("Área : %f \n" ,area_4);
    printf("PIB : %f \n" ,pib_4);
    printf("N° De Pontos Turisticos : %d \n" ,numero_pontos_turisticos_4);


    return 0;
}
