#include <stdio.h>

void insertionSort(int vetor[], int tamanho) {
    int i, j, chave;
    for (i = 1; i < tamanho; i++) {
        chave = vetor[i];
        for (j = i; (j > 0) && (chave < vetor[j - 1]); j--) {
            vetor[j] = vetor[j - 1];
        }
        vetor[j] = chave;
    }
}

void printArray(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {150, 110, 130, 180, 140, 120, 190, 160, 170, 100};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor desordenado: ");
    printArray(vetor, tamanho);

    insertionSort(vetor, tamanho);

    printf("\nOrdenando por metodo Insertionsort\n");
    printf("\nVetor apos a ordenacao: ");
    printArray(vetor, tamanho);

    return 0;
}
