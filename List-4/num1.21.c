#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo
    var
        v: vetor[1..100] de inteiro
        nv: vetor[1..100] de inteiro
        n, k, x, S, g, r, p1, P: inteiro
        h: real
        a: vetor[1..100] de real
        b: vetor[1..100] de real
        m: real
    
    escreva("Digite o número de alunos na sala: ")
    leia(n)
    escreva("Digite o número de provas realizadas: ")
    leia(k)
    
    para i de 1 até k faça
        escreva("\nPara a prova ", i, ", digite seu peso: ")
        leia(p1)
        nv[i] <- p1
        P <- P + p1
    fimpara
    
    escreva("\n\n")
    
    para i de 1 até n faça
        escreva("Para o aluno ", i, ", digite suas notas:\n")
        
        para j de 1 até k faça
            escreva("    Nota ", j, ": ")
            leia(h)
            b[j] <- b[j] + h
            m <- m + (h * nv[j])
        fimpara
        
        m <- m / P
        a[i] <- m 
    fimpara
    
    para i de 1 até k faça
        b[i] <- b[i] / n
    fimpara
    
    escreva("\n\n")
    
    para i de 1 até k faça
        escreva("A média da prova ", i, " é ", b[i]:.2f, "\n")
    fimpara
    
    escreva("\n\n Médias ponderadas alunos:\n")
    
    para i de 1 até n faça
        escreva("Aluno ", i, ": ", a[i]:.2f, "\n")
    fimpara

fim_algoritmo
  */

int main() {
    int v[100], nv[100],n,k,x,S=0,g,r,p1,P=0;
    double h,a[100],b[100],m=0;
    printf("Digite o numero de alunos na sala: ");
    scanf("%d",&n);
    printf("Digite o numero de provas realizadas: ");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        printf("\npara a prova %d, digite seu peso: ",i+1);
        scanf("%d",&p1);
        nv[i]=p1;
        P += p1;
    }
    printf("\n\n");
    for(int i=0;i<n;i++){
        printf("para o aluno %d, digite suas notas: \n",i+1);
        for(int j=0;j<k;j++){
            printf("    Nota %d: ",j+1);
            scanf("%lf",&h);
            b[j] += h;
            m += h*nv[j];
        }
        m /= P;
        a[i]=m; 
    }
    for(int i=0;i<k;i++){
        b[i] /= n;
    }
    printf("\n\n");
    for(int i=0;i<k;i++){
        printf("A media da prova %d eh %.2lf\n",i+1,b[i]);
    }
    printf("\n\n Medias ponderadas alunos:\n");
    for(int i=0;i<n;i++){
        printf("Aluno %d: %.2lf\n",i+1,a[i]);
    }

    return 0;
}

