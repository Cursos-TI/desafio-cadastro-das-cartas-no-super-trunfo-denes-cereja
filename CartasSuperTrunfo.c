#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        
    //Declarar Variáveis da Carta nº 01
    char carta01_estado;
    char carta01_codigo[3];
    char carta01_cidade[50];
    int carta01_populacao;
    float carta01_area;
    float carta01_PIB;
    int carta01_ponto_turistico;

    //Declarar Variáveis da Carta nº 02
    char carta02_estado;
    char carta02_codigo[3];
    char carta02_cidade[50];
    int carta02_populacao;
    float carta02_area;
    float carta02_PIB;
    int carta02_ponto_turistico;

        
    //Cadastro da Carta nº 01
    printf("***Cadastrar Carta nº 01***\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &carta01_estado);
    printf("Digite o código da Cidade: ");
    scanf("%s", &carta01_codigo);
    printf("\n");
    
    
    //Exibir dados da Carta nº 01
    printf("***Dados da Carta nº 01***\n");
    printf("Letra do Estado: %c\n", carta01_estado);
    printf("Código da Cidade: %s\n", carta01_codigo);
    printf("\n");

    //Cadastro da Carta nº 02
    printf("***Cadastrar a Carta nº 02***\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &carta02_estado);
    printf("\n");


    //Exibir Dados da Carta nº 02
    printf("***Dados da Carta nº 02***\n");
    printf("Letra do Estado: %c\n", carta02_estado);
      

    return 0;
}
