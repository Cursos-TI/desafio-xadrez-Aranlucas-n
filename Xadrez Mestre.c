#include <stdio.h>

//Função recursiva

//Movimento da torre
void torre(int casas){
 if(casas > 0){
    printf("Direita\n");
    torre(casas - 1);
 }
}

// Movimento da Rainha
void rainha(int casas){
    if(casas > 0 ){
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

// Movimento do bispo
void bispo(int casas){
    if(casas > 0){
        // Loop externo vertical cima
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");

            // loop interno horizontal direita
            for (int j = 0; j < 1; j++){
                printf("Direita\n");
            }
        } 
        bispo(casas - 1);  
    }
}


int main() {

    //Variável i definida para receber o i++ e garantir que o programa não entre em loop
    int movetorre = 5; 
    int movebispo = 5;
    int moverainha = 8;
    int cavalocima = 2;
    int cavalodireita = 1;

    // Implementação de Movimentação do Bispo
    printf("### Movimento do Bispo! ###\n");
    bispo(movebispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("### Movimento da Torre! ###\n");
    torre(movetorre);
    printf("\n");
    
    // Implementação de Movimentação da Rainha
    printf("### Movimento da Rainha! ###\n");
    rainha(moverainha);
    printf("\n");

     // Movimento do Cavalo
    printf("### Movimento do Cavalo ###\n");

    
    for (int i = 0; i < cavalocima; i++)
    { 
        printf("Cima\n");

        int j = 0;
        while(j < cavalodireita && i == cavalocima - 1)
        {
            printf("Direita\n");
            j++;
            break;
        }
        
    }
    
    return 0;
}