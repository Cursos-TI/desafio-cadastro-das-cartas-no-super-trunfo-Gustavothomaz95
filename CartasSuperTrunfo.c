#include <stdio.h>

    int main(){
        printf("Desafio cartaz Super Trunfo!\n");

        char Carta[10];
        char Estado[50];
        char Codigo[50];
        char Cidade[50];
        int População;
        float Area;
        float PIB;
        int PontosTuristicos;

        printf("Carta A01: \n");

        printf("Estado: \n");
        scanf("%s", Estado);

        printf("Digite o Codigo da Cidade: \n");
        scanf("%s", Codigo);

        printf("Nome da Cidade: \n");
        scanf("%s", Cidade);

        printf("População: \n");
        scanf("%d", &População);

        printf("Area km²: \n");
        scanf("%e", &Area);

        printf("Tabela PIB em R$ \n");
        scanf("%f", &PIB);

        printf("Quantidade de Pontos Turisticos: \n");
        scanf("%d", &PontosTuristicos);

        printf("\n=== Carta Cadastrada ===\n");
        printf("Código: %s\n", Codigo);
        printf("Nome da cidade: %s\n", Cidade);
        printf("População: %d habitantes\n", População);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: R$ %.2f bilhões\n", PIB);
        printf("Pontos turísticos: %d\n", PontosTuristicos);

        printf("\n");

        printf("Carta A02: \n");

        printf("Estado: \n");
        scanf("%s", Estado);

        printf("Digite o Codigo da Cidade: \n");
        scanf("%s", Codigo);

        printf("Nome da Cidade: \n");
        scanf("%s", Cidade);

        printf("População: \n");
        scanf("%d", &População);

        printf("Area km²: \n");
        scanf("%e", &Area);

        printf("Tabela PIB em R$ \n");
        scanf("%f", &PIB);

        printf("Quantidade de Pontos Turisticos: \n");
        scanf("%d", &PontosTuristicos);

        printf("\n=== Carta Cadastrada ===\n");
        printf("Código: %s\n", Codigo);
        printf("Nome da cidade: %s\n", Cidade);
        printf("População: %d habitantes\n", População);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: R$ %.2f bilhões\n", PIB);
        printf("Pontos turísticos: %d\n", PontosTuristicos);


        return 0;

    }
        


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
