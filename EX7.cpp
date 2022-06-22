#include <stdio.h>

#define TAM 10 //cria uma constante

int main() {
    int vet[TAM], i, maior, posMaior, menor, posMenor;

printf("\ndigite valores mair que zero \n");
    //preenche o vetor
    for (i = 0; i < TAM; i++) {
        scanf("%i", &vet[i]);
    }

    //encontra o maior valor
    maior    = vet[0];
    posMaior = 0;
    for (i = 1; i < TAM; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
            posMaior = i;
        }
    }

    //encontra o menor valor
    menor    = vet[0];
    posMenor = 0;
    for (i = 1; i < TAM; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }

    //mostra o vetor
    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet[i]);
    }

    printf("\nMaior valor: %i - posicao: %i", maior, posMaior+1);
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);

    return 0;
}
