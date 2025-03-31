#include<stdio.h>

void selectionSort( int arr[], int n){
	
	for(int i = 0; i < n-1; i++){
		int minIndex = i;
		
		for(int j = i+1; j < n; i++){
			
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		
		}
		
		if(minIndex != i){ /* se minIndex for igual a i, não há necessidade de troca, já que o valor na posição i já é o menor.*/
			int temp = arr[i];
			arr [i] = arr[minIndex];
			arr[minIndex] = temp;
			
			/* A troca com a variável temp é usada justamente para reorganizar os elementos de forma que o menor valor 
			(ou qualquer valor que você deseje mover) seja colocado na posição correta.*/
			
		}
	}
}

void ImprimirArray(int arr[], int n){
	for( int i = 0; i< n; i++){
		printf("%d", arr[i]);
	}
	/*imprimir um espaço entre*/
}

int main(){
	
	int arr[] = { 10, 78, 56, 33, 22};
	int n = sizeof(arr)/ sizeof(arr[0]); /*ausencia de chaves no primeiro sizeof é por conta de que  
	quando você passa um array como argumento para uma função (ou em expressões como sizeof), 
	ele é convertido automaticamente para um ponteiro para o primeiro elemento do array.
	 Ou seja, a expressão arr em um contexto como sizeof(arr) é tratada como um ponteiro. 
	 ja o outro arr tem a presença d chaves pois esta perguntando a posição 0 do array*/
	 
	 
	 printf(" Olá este é o array antes de ordenar!");
	 ImprimirArray(arr, n);
	 
	 selectionSort(arr, n); /*função para a ordenação*/
	 
	 printf("E agora este é o array após ordenar!");
	 ImprimirArray(arr, n);
	
	return 0;
}
