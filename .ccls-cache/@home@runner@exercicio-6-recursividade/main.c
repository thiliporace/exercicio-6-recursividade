#include <stdio.h>

// void maior(int v[], int tamanho, int f) {
//   int aux;
//   for (int i = 0; i < tamanho;i++){
//     v[i] = aux;
//     if (v[i] > aux)
//       aux = v[i];
//   }
// }

#define max(a,b) (a>b)? a:b

int obterMaior(int v[], int k){
  if (k  == 0)
    return v[k];
  int maior = obterMaior(v, k-1);
  return max (maior,v[k]);
}

int main() {
  int vetor[6] = {1,2,3,4,5,6};
  printf("%i",obterMaior(vetor,5));
}