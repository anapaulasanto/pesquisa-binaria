#include <stdio.h>
void bubbleSort(int vet[] , int tam) {
  int aux, i, j;
  
  for (int j = 1 ; j < tam ; j++) {
    for (int i = 0 ; i < tam - 1 ; i++) {
      if (vet[i] > vet[i + 1]) {
        aux = vet[i];
        vet[i] = vet[i + 1];
        vet[i + 1] = aux;
      }
    }
  }
  printf("Ordenado: ");
  for (int i = 0 ; i < tam ; i++) {
    printf(" %d " , vet[i]);
  }
}

int pesquisaBinaria(int vet[], int tam, int num) {
  int inicio = 0, fim = tam - 1, meio;
  while (inicio <= fim ) {
    meio = (inicio + fim) / 2;
    if (vet[meio] == num) {
      return meio;
    } else if (vet[meio] < num) {
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }
  return -1;
}

int main() {
  int qtd_reg, num, posicao;

  printf("Digite a qauntidade de registros: ");
  scanf("%d", &qtd_reg);

  int vet[qtd_reg];

  for(int i = 0 ; i < qtd_reg ; i++) {
    printf("Digite o elemento %d: ", i + 1);
    scanf("%d", &vet[i]);
  }

  printf("Atual: ");
  for (int i = 0 ; i < qtd_reg ; i++) {
    printf(" %d " , vet[i]);
  }

  bubbleSort(vet, qtd_reg);

  printf("Digite o numero procurado: ");
  scanf("%d", &num);

  posicao = pesquisaBinaria(vet, qtd_reg, num);

  if (posicao != -1) {
    printf("Numero encontrado na posicao %d", posicao);
  } else {
    printf("Numero nao encontrado");
  }

    return 0;
}
