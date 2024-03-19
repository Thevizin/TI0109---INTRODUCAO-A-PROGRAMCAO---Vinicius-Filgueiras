#include <stdio.h>

void Sena (int num[], int t, int pos, int comb[]){
    if (pos == t){
        for(int i=0; i < t; i++){
            printf("%d ",comb[i]);
        }
        printf("\n");
    }
    else{
        for(int i = pos; i<60; i++){
            comb[pos] = num[i];
            Sena(num, t, pos + 1, comb);
        }
    }
}

int main () {
    int num[60];
    int comb[6];

    for (int i=0; i<60; i++){
        num[i] = i+1;
    }

    Sena(num, 6, 0, comb);

    return 0;    
}