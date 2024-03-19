/* PORTUGOL
Algoritmo
declare M[3,3], Ma[3,3], D[3,5], Mcof[3,5], Mm[2,2], Mi[3,3], Dp, Ds, C, Fat, Det numéricos
escreva "forneça os valores da matriz: "
para i <- 1 até 3 faça
    início
    para j <- 1 até 3 faça
        início
        escreva "linha " i "coluna " j ": "
        leia M[i,j]
        D[i,j] <- M[i,j]
        fim_para
    fim_para
para i <- 1 até 3 faça
    início
    para j <- 1 até 2 faça
        início
        D[i,j+3] <- M[i,j]
        fim_para
    fim_para
Dp <- 0
C <- 1
para j <- 1 até 3 faça
    início
    k <- j
    para i <- 1 até 3 faça
        início
        C <- C * D[i,k]
        k <- k + 1
        fim_para
    Dp = Dp + C
    fim_para
escreva "diagonal principal = " Dp
Ds <- 0
C <- 1
para j <- 5 até 2 faça
    início
    k <- j
    para i <- 1 até 3 faça
        início
        C <- C * D[i,k]
        k <- k - 1
        fim_para
    Ds <- Ds + C
    fim_para
escreva "Diagonal secundária = " Ds
Det <- Dp - Ds
escreva "Determinante = " Det
Fat <- 1
se Det =/= 0
    início
    escreva "existe matriz inversa!"
    para i <- 1 até 3 faça
        início
        para j <- 1 até 3 faça
            início
            para i2 <- 1 até 3 faça
                início
                para j2 <- 1 até 3 faça
                    início
                    se i2 =/= i e j2 =/= j
                        início
                        declare k, l numericos
                        se i2 < i
                            k <- i2
                        senão
                            k <- i2 - 1
                        se i2 < j
                            l <- j2
                        senão
                            l <- j2 - 1
                        Mm[k,l] <- M[i2,j2]
                        fim_se
                    fim_para
                fim_para
            Mcof[i,j] <- Fat * ((Mm[1,1]*Mm[2,2])-(Mm[1,2]*Mm[2,1]))
            Fat <- Fat * (-1)
            fim_para
        fim_para
    para i <- 1 até 3 faça
        início
        para j <- 1 até 3 faça
            início
            M[j,i] <- Mcof[i,j]
            fim_para
        fim_para
    escreva "Matriz adjunta: "
    para i <- 1 até 3 faça
        início
        para j <- 1 até 3 faça
            início
            escreva Ma[i,j]
            fim_para
        fim_para
    para i <- 1 até 3 faça
        início
        para j <- 1 até 3 faça
            início
            Mi[i,j] <- Ma[i,j]/Det
            fim_para
        fim_para
    escreva "Matriz inversa: "
    para i <- 1 até 3 faça
        início
        para j <- 1 até 3 faça
            início
            escreva Mi[i,j]
            fim_para
        fim_para
    fim_se
fim_algoritmo
*/