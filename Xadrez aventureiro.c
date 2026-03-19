#include <stdio.h>


int main() {

    //Variável i definida para receber o i++ e garantir que o programa não entre em loop
    int torre = 5; 
    int bispo = 5;
    int rainha = 8;
    int cavalobaixo = 2;
    int cavaloesquerda = 1;
    int i;

    // Implementação de Movimentação do Bispo
    
    printf("### Movimento do Bispo! ###\n");

    for (i = 0; i < bispo; i++)
    {
        printf("Cima Direita\n");
    }

    // Implementação de Movimentação da Torre

    printf("### Movimento da Torre! ###\n");
    // Necessário definir valor de i, pois o mesmo foi alterado na variavel for
    i = 0;
    while (i < torre)
    {
        printf("Direita\n");
        i++;
    }
    
    // Implementação de Movimentação da Rainha
    
    printf("### Movimento da Rainha! ###\n");
    // Necessário definir valor de i, pois o mesmo foi alterado na variavel while
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < rainha);

    printf("\n");

     // Movimento do Cavalo

    printf("### Movimento do Cavalo ###\n");

    i = 0;

    for ( i = 0; i < cavalobaixo; i++)
    {
        printf("Baixo");
    // Incluido um if para garantir que a saida baixo saia 2 vezes.
        if (i == cavalobaixo - 1){
        printf("\n");
    // Decalarado a variavel j localmente    
        int j = 0;
        while (j < cavaloesquerda){
        
            printf("Esquerda");
            j++;
        }
    }
    printf("\n");   
        
    }
     

    return 0;
}