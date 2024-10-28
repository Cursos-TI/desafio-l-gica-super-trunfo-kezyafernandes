#include <stdio.h>

#define TAM_CODIGO 3
#define TAM_NOME 50

typedef struct {
    char codigo[TAM_CODIGO];
    char nome[TAM_NOME];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Cidade;

void cadastrarCidade(Cidade* cidade) {
    printf("Digite o código da cidade: ");
    scanf("%s", cidade->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade->nome);
    printf("Digite a população: ");
    scanf("%d", &cidade->populacao);
    printf("Digite a área: ");
    scanf("%f", &cidade->area);
    printf("Digite o PIB: ");
    scanf("%f", &cidade->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontosTuristicos);
}

void exibirCidade(Cidade cidade) {
    printf("Código: %s\n", cidade.codigo);
    printf("Nome: %s\n", cidade.nome);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Pontos turísticos: %d\n", cidade.pontosTuristicos);
}

void compararCidades(Cidade cidadeA, Cidade cidadeB) {
    // Implemente as comparações aqui
}

int main() {
    Cidade cidadeA, cidadeB;

    printf("Cadastro da Cidade 1:\n");
    cadastrarCidade(&cidadeA);

    printf("\nCadastro da Cidade 2:\n");
    cadastrarCidade(&cidadeB);

    printf("\nDados da Cidade 1:\n");
    exibirCidade(cidadeA);

    printf("\nDados da Cidade 2:\n");
    exibirCidade(cidadeB);

    compararCidades(cidadeA, cidadeB);

    return 0;
}
