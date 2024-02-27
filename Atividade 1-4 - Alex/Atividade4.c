#include <stdio.h>

void bubbleSortOscilante(int arr[], int n) {
    int i, j, temp;
    int left = 0;
    int right = n - 1;
    int swapped = 1;

    while (left < right && swapped) {
        swapped = 0;

        for (i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }

        right--;

        for (j = right; j > left; j--) {
            if (arr[j] < arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = 1;
            }
        }

        left++;
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
    int vetor[] = {120, 110, 190, 130, 140, 150, 160, 170, 100, 180};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor desordenado: ");
    printArray(vetor, tamanho);

    bubbleSortOscilante(vetor, tamanho);

    printf("\nOrdenando por metodo Bubblesort oscilante - Cocktailsort\n");
    printf("\nVetor ordenado: ");
    printArray(vetor, tamanho);

    return 0;
}
