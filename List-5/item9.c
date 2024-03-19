#include <math.h>
#include <stdio.h>

int main() {
  int A[3][2], B[2][5], C[3][5], M, E, L=0;
  printf("matriz A\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("\nelemento linha %d coluna %d: ", i + 1, j + 1);
      scanf("%d", &E);
      A[i][j] = E;
    }
  }
  printf("\nmatriz A\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      printf("\nelemento linha %d coluna %d: ", i + 1, j + 1);
      scanf("%d", &E);
      B[i][j] = E;
    }
  }
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 5; j++){
      for (int k = 0; k < 2; k++){
        L = L + A[i][k] * B[k][j];
      }
      C[i][j]= L;
      L= 0;
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
      printf("para a linha %d, coluna %d: %d\n",i+1, j+1 ,C[i][j]);
    }
           
  }
}