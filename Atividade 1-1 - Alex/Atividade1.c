#include <stdio.h>


int BuscaLinear(int *vetor, int n, int elem) {
    for (int i = 0; i < n; i++) {
        if (elem == vetor[i]) {
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *vetor, int n, int elem) {
    for (int i = 0; i < n; i++) {
        if (elem == vetor[i]) {
            return i;
        } else {
            if (elem < vetor[i]) {
                return -1;
            }
        }
    }
}

int buscaBinaria(int *vetor, int n, int elem) {
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n - 1;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        printf("Inicio: %d \t Fim: %d\n", inicio, fim);
        if (elem < vetor[meio]) {
            fim = meio - 1;
        } else {
            if (elem > vetor[meio]) {
                inicio = meio + 1;
            } else {
                return meio;
            }
        }
        printf ("Inicio: %d \t Fim: %d\n", inicio, fim);
    }
    return -1;
}


int main() {

    int vetorDesordenado[] = {4, 2, 7, 1, 9, 5, 3, 8, 6};
    int vetorOrdenado[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanhoDesordenado = sizeof(vetorDesordenado) / sizeof(vetorDesordenado[0]);
    int tamanhoOrdenado = sizeof(vetorOrdenado) / sizeof(vetorOrdenado[0]);


    int elem = 5;
    int elemBin= 7;


    int indiceLinear = BuscaLinear(vetorDesordenado, tamanhoDesordenado, elem);
    int indiceOrdenado = buscaOrdenada(vetorOrdenado, tamanhoOrdenado, elem);

    printf("Vetor Desordenado: ");
    for (int i = 0; i < tamanhoDesordenado; i++) {
        printf("%d ", vetorDesordenado[i]);
    }
    printf("\nElemento a ser procurado no vetor: %d\n", elem);
    printf("A posicao do elemento no vetor e: %d\n\n\n", indiceLinear);

    printf("Vetor Ordenado: ");
    for (int i = 0; i < tamanhoOrdenado; i++) {
        printf("%d ", vetorOrdenado[i]);
    }
    printf("\nElemento a ser procurado por busca ordenada: %d\n", elem);
    printf("A posicao do elemento no vetor e: %d\n\n", indiceOrdenado);

    printf("Elemento a ser procurado por busca binaria: %d\n", elemBin);
    int indiceBinaria = buscaBinaria(vetorOrdenado, tamanhoOrdenado, elemBin);
    printf("A posicao do elemento no vetor e: %d", indiceBinaria);




    return 0;
}
