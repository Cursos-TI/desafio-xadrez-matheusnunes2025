#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int rainha = 1;
    int bispo = 1;
    int torre = 1;

    // Implementação de Movimentação do Bispo
    while(bispo <= 3){
        if(bispo <= 2){
            printf("Bispo: Cima/Direita\n");
        }else{
            printf("Bispo: Cima/Esquerda\n");
        }
        bispo += 1;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do{
        if(torre <= 2){
            printf("Torre: Cima\n");
        }else{
            printf("Torre: Direita\n");
        }
        torre+=1;
    }while(torre <= 4);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    for(rainha; rainha <= 3; rainha++){
        if(rainha == 1){
            printf("Rainha: Direita/Cima\n");
        }
        else if(rainha == 2){
            printf("Rainha: Cima\n");
        }
        else{
            printf("Rainha: Cima/Esquerda\n");
        }
    }
    // Nível Aventureiro - Movimentação do Cavalo
    int cavalo_horizontal = 1;
    int cavalo_vertical;

    for(cavalo_vertical=1; cavalo_vertical <= 2; cavalo_vertical++){
        printf("Cavalo: Baixo\n");
        while(cavalo_horizontal <= 1 && cavalo_vertical == 2){
            printf("Cavalo: Esquerda\n");
            cavalo_horizontal++;
        }
    }
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
