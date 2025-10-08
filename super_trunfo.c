//Desafio de cartas Super Trunfo
#include <stdio.h>
int main(){
     
    //Variáveis carta 1
    char Estado;
    char Codigo[5];
    char Nome[50];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int Pontos;
    float DensidadePop;
    float PIBPerCapita;
    float SuperPoder;

    //Variáveis carta 2
    char Estado2;
    char Codigo2[5];
    char Nome2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;
    float DensidadePop2;
    float PIBPerCapita2;
    float SuperPoder2;

    //Entrada e saída de dados - carta 1
    printf("Cadastro da carta 1\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite o Código: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome);

    printf("Digite a população: \n");
    scanf("%lu", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos);

    printf("Carta 1 cadastrada!\n\n");

    DensidadePop = (float) Populacao / Area; // Cálculo de densidade populacional - carta 1
    PIBPerCapita = (float) PIB / Populacao; // Cálculo de PIB Per Capita - carta 1

    // Cálculo de Super Poder da carta 1
    SuperPoder = (float) Populacao + Area + PIB + Pontos + PIBPerCapita + DensidadePop;

    //Entrada e saída de dados - carta 2
    printf("Cadastro da carta 2\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código: \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome2);

    printf("Digite a população: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a Area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos2);

    printf("Carta 2 cadastrada!\n\n");

    DensidadePop2 = (float) Populacao2 / Area2; // Cálculo de densidade populacional - carta 2
    PIBPerCapita2 = (float) PIB2 / Populacao2; // Cálculo de PIB Per Capita - carta 2

    // Cálculo de Super Poder da carta 2
    SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + Pontos2 + PIBPerCapita2 + DensidadePop2;

     // Variáveis para fazer comparação dos atributos das cartas
    unsigned long int resultadoPop = Populacao > Populacao2;
    float resultadoArea = Area > Area2;
    float resultadoPIB = PIB > PIB2;
    int resultadoPontos = Pontos > Pontos2;
    float resultadoPPC = PIBPerCapita > PIBPerCapita2;
    float resultadoDensidade = DensidadePop < DensidadePop2;
    float resultadoSuperPoder = SuperPoder > SuperPoder2;

    //Comando "printf" para exibir os dados da carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %lu\n", Populacao);
    printf("Area: %.f\n", Area);
    printf("PIB: %.f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Pontos);
    printf("Densidade populacional: %.3f\n", DensidadePop);
    printf("PIB Per Capita: %.f\n", PIBPerCapita);
    printf("Super Poder: %.f \n\n", SuperPoder);

    //Comando "printf" para exibir os dados da carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %lu\n", Populacao2);
    printf("Area: %.f\n", Area2);
    printf("PIB: %.f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos2);
    printf("Densidade populacional: %.3f\n", DensidadePop2);
    printf("PIB Per Capita: %.f\n", PIBPerCapita2);
    printf("Super Poder: %.f \n\n", SuperPoder2);

    // Comando "printf" para exibir resultados de comparacões
    printf("Comparação de atributos\n");
    printf("População: a carta %lu venceu!\n", resultadoPop);
    printf("Area: a carta %.f venceu!\n", resultadoArea);
    printf("PIB: a carta %.f venceu!\n", resultadoPIB);
    printf("Pontos turísticos: a carta %d venceu!\n", resultadoPontos);
    printf("PIB Per Capita: a carta %.f venceu!\n", resultadoPIB);
    printf("Densidade populacional: a carta %.f venceu!\n", resultadoDensidade);
    printf("Super Poder: a carta %.f venceu!\n\n", resultadoSuperPoder);

    // Comparação do atributo "população" através da lógica if-else
    printf("Comparação de cartas - Atributo: População\n");
    printf("Carta 1 - %s: %lu\n", Nome, Populacao);
    printf("Carta 2 - %s: %lu\n", Nome2, Populacao2);

    if (Populacao > Populacao2) {
        printf("Resultado: a carta 1 (%s) venceu!\n", Nome);
    } else {
        printf("Resultado: a carta 2 (%s) venceu!\n", Nome2);
    }

    return 0;

}