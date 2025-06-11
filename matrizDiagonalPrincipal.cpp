#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Matriz: Algoritmo que leia os elementos de uma matriz inteira de 4x4 e imprima os elementos da diagonal principal

int main(){
    
    //Declaração de variaveis
    int mat[4][4];
    int linha, coluna;
    
    //Entrada
    for(linha=0; linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            printf("Informe um valor inteiro para lin %d e col %d: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }
    
    //Saída
    printf("\nMatriz: \n");
    for(linha=0; linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            printf(" | %d | ", mat[linha][coluna]);
        }
        printf("\n");
    }
    
    printf("\nMatriz(somente com a diagonal principal): \n");
    for(linha=0; linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            if(linha == coluna){
                printf(" | %d | ", mat[linha][coluna]);
            }else{
                printf(" |   | ");
            }
    }
    printf("\n");
    }
    
    printf("\nValores da diagonal Principal: \n");
    for(linha=0; linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            if(linha == coluna){
                printf("%d ", mat[linha][coluna]);
            }
        }
    }
    
    printf("\n\n");
     
    system("pause");
    return 0;
}
