#include <math.h>
#include <stdio.h>

int main() {
  int H[3][5], C, M[3], E, Y=0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("\nelemento linha %d coluna %d: ", i + 1, j + 1);
      scanf("%d", &E);
      H[i][j] = E;
      Y = Y + E;
    }
    M[i]= Y;
    Y=0;
  }
  for(int i=0; i<3; i++){
        printf("para a linha %d: %d\n",i+1 ,M[i]);
      
  }
}