#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor desordenado: ");
    printArray(vetor, tamanho);

    bubbleSort(vetor, tamanho);

    printf("\nOrdenando por metodo Bubblesort\n");

    printf("\nVetor Ordenado: ");
    printArray(vetor, tamanho);

    return 0;
}
