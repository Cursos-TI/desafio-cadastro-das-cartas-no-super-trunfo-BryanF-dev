#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("**__ Bem Vindos ao Jogo Super Trunfo (Paises)__** \n");  //Titulo do jogo!
   

printf("Cadastro de Cartas Do Jogo. \n"); //Introdução

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 
    char Carta01 [20]="Carta 01";                      //VARIAVES
    char Carta02 [20]="Carta 02";
    char Estado [20];
    char Estado_[20];
    char Cod_carta[20];
    char Cod_carta_1[20];
    char Nome_cidade[20];
    char Nome_cidade_1[20];
    int Populacao;
    int Populacao_1;
    float Area;
    float Area_1;
    float PIB;
    float PIB_1;
    int Pont_turisticos;
    int Pont_turisticos_1;
    float Densi_populacional;
    float Densi_populacional1;
    float PIB_per_capita;
    float PIB_per_capita1;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    printf("\n");                                   //REGISTO CARTA 1
    printf("Carta N°1 \n");
    printf("\n");
    printf("Estado 1: \n");
    scanf("%s" ,&Estado);
    printf("Codigo Da Carta 1: \n");
    scanf("%s" ,&Cod_carta);
    printf("Nome Da Cidade 1: \n");
    scanf("%s" ,&Nome_cidade);
    printf("População 1: \n");
    scanf("%d" ,&Populacao);
    printf("Area 1: \n");
    scanf("%f" ,&Area);
    printf("PIB 1: \n");
    scanf("%f" ,&PIB);
    printf("Pontos Turisticos 1: \n");
    scanf("%d" ,&Pont_turisticos);
    Densi_populacional = (float) Populacao /  Area;
    PIB_per_capita = (float) PIB / Populacao ;    

    printf("\n");                //ESPAÇO

    printf ("Carta 01 : \n");                           //RESULTADO CARTA 1
    printf("Estado: %s \n" ,Estado);
    printf("Codigo Da Carta: %s \n" ,Cod_carta);
    printf("Nome Da Cidade: %s \n" ,Nome_cidade);
    printf("População: %d \n" ,Populacao);
    printf("Area: %.2f \n" ,Area);
    printf("PIB: %.2f \n" ,PIB);
    printf("Pontos Turisticos: %d \n" ,Pont_turisticos);
    printf("Densidade Populacional: %.2f \n" ,Densi_populacional);
    printf("PIB per Capita: %.2f \n" ,PIB_per_capita);

    printf("\n");    //ESPAÇO

                                                    //REGISTRO CARTA 2
    printf("Carta N°2 \n");
    printf("\n");                   
    printf("Estado 2: \n");
    scanf("%s" ,&Estado_);
    printf("Codigo Da Carta 2: \n");
    scanf("%s" ,&Cod_carta_1);
    printf("Nome Da Cidade 2: \n");
    scanf("%s" ,&Nome_cidade_1);
    printf("População 2: \n");
    scanf("%d" ,&Populacao_1);
    printf("Area 2: \n");
    scanf("%f" ,&Area_1);
    printf("PIB 2: \n");
    scanf("%f" ,&PIB_1);
    printf("Pontos Turisticos 2: \n");
    scanf("%d" ,&Pont_turisticos_1); 
    Densi_populacional1 = (float) Populacao_1 / Area_1;
    PIB_per_capita1 = (float) PIB_1 / Populacao_1;

    printf("\n");                //ESPAÇO     

    printf ("Carta 02 \n");                        //RESULTADO CARTA 2
    printf("Estado: %s \n" ,Estado_);
    printf("Codigo Da Carta: %s \n" ,Cod_carta_1);
    printf("Nome Da Cidade: %s \n" ,Nome_cidade_1);
    printf("População: %d \n" ,Populacao_1);
    printf("Area: %.2f \n" ,Area_1);
    printf("PIB: %.2f \n" ,PIB_1);
    printf("Pontos Turisticos: %d \n" ,Pont_turisticos_1);
    printf("Densidade Populacional: %.2f \n" ,Densi_populacional1);
    printf("PIB per Capita: %.2f \n" ,PIB_per_capita1);
        
    printf("\n");



    return 0;
}
