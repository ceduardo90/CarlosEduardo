//Desafio de cartas Super Trunfo
#include <stdio.h>
int main(){
     
    //Variáveis carta 1
      char Estado;
      char Codigo[5];
      char Nome[50];
      int Populacao;
      float Area;
      float PIB;
      int Pontos;

    //Variáveis carta 2
    char Estado2;
    char Codigo2[5];
    char Nome2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    //Entrada e saída de dados - carta 1
    printf("Cadastro da carta 1\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite o Código: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome);

    printf("Digite a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos);

    printf("Carta 1 cadastrada!\n");

    //Entrada e saída de dados - carta 2
    printf("Cadastro da carta 2\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código: \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome2);

    printf("Digite a população: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos2);

    printf("Carta 2 cadastrada!\n");

    //Comando "printf" para exibir os dados da carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %d\n", Populacao);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Pontos);

    //Comando "printf" para exibir os dados da carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos2);

    return 0;


}