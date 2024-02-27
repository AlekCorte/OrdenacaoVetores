#include <stdio.h>

void selectionSort(int vetor[], int tamanho) {
    int i, j, minIndex, temp;
    for (i = 0; i < tamanho - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        temp = vetor[minIndex];
        vetor[minIndex] = vetor[i];
        vetor[i] = temp;
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

    printf("Vetor antes da ordenacao: ");
    printArray(vetor, tamanho);

    selectionSort(vetor, tamanho);

    printf("\nOrdenando por metodo Selectionsort\n");
    printf("\nVetor ja ordenado: ");
    printArray(vetor, tamanho);

    return 0;
}
