#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char estado; // Letra do estado (A a H)
    int cidade; // Número da cidade (1 a 4)
    char nome[50]; // Nome da cidade
    long long int populacao; // População da cidade
    double area; // Área da cidade em km²
    double pib; // PIB da cidade em milhões de dólares
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

int main() {
    Carta cartas[64]; // Vetor para armazenar as 64 cartas (8 estados x 4 cidades)
    int i;

    // Cadastro das cartas
    for (i = 0; i < 64; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);
        printf("Digite o estado (A a H): ");
        scanf(" %c", &cartas[i].estado);
        printf("Digite o número da cidade (1 a 4): ");
        scanf("%d", &cartas[i].cidade);
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nome);
        printf("Digite a população da cidade: ");
        scanf("%lld", &cartas[i].populacao);
        printf("Digite a área da cidade (km²): ");
        scanf("%lf", &cartas[i].area);
        printf("Digite o PIB da cidade (milhões de dólares): ");
        scanf("%lf", &cartas[i].pib);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
    }

    // Menu Interativo
    int opcao, carta1, carta2, atributo;
    do {
        printf("\n--- Super Trunfo: Países ---\n");
        printf("1. Comparar Cartas\n");
        printf("2. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o código da primeira carta (ex: A01): ");
                scanf("%c%d", &cartas[carta1].estado, &cartas[carta1].cidade);
                printf("Digite o código da segunda carta (ex: B02): ");
                scanf("%c%d", &cartas[carta2].estado, &cartas[carta2].cidade);

                // Comparação de Cartas
                printf("\n--- Comparar Cartas ---\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Populacional\n");
                printf("Digite o atributo para comparação: ");
                scanf("%d", &atributo);

                // ... (Lógica de comparação aninhada)

                break;
            case 2:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 2);

    return 0;
}