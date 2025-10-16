#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[50];
    char corExercito[30];
    int numeroTropas;
};

int main() {
    struct Territorio mapa[5];
    char linha[100];

    printf("=== Cadastro de Territorios ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);

        printf("Nome do territorio: ");
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0';

        printf("Cor do exercito: ");
        fgets(mapa[i].corExercito, sizeof(mapa[i].corExercito), stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        printf("Numero de tropas: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &mapa[i].numeroTropas);
    }

    printf("\n=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do Exercito: %s\n", mapa[i].corExercito);
        printf("Numero de Tropas: %d\n\n", mapa[i].numeroTropas);
    }

    return 0;
}