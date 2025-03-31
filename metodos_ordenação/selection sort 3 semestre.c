#include<stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Loop para percorrer o array
        int minIndex = i;

        // Loop para encontrar o menor valor na parte não ordenada do array
        for (int j = i + 1; j < n; j++) {  // Corrigido: j deve ser incrementado, não i
            if (arr[j] < arr[minIndex]) {  // Se encontrar um valor menor
                minIndex = j;  // Atualiza o índice do menor valor
            }
        }

        // Se minIndex for diferente de i, fazemos a troca
        if (minIndex != i) {
            int temp = arr[i];  // Armazena o valor de arr[i] em temp
            arr[i] = arr[minIndex];  // Coloca o menor valor na posição arr[i]
            arr[minIndex] = temp;  // Coloca o valor original de arr[i] na posição arr[minIndex]
        }
    }
}

void ImprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Imprime o valor e um espaço
    }
    printf("\n");  // Para pular uma linha ao final
}

int main() {
    int arr[] = {10, 78, 56, 33, 22};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calcula o tamanho do array

    printf("Olá, este é o array antes de ordenar: ");
    ImprimirArray(arr, n);  // Imprime o array antes de ordenar

    selectionSort(arr, n);  // Chama a função de ordenação

    printf("E agora, este é o array após ordenar: ");
    ImprimirArray(arr, n);  // Imprime o array após ordenar

    return 0;
}
