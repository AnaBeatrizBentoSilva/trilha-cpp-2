#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Matriz: Algoritmo que leia os elementos de uma matriz inteira de 3x3 e imprima todos os elementos, exceto os da diagonal principal

int main(){
    
    //Declaração de variaveis
    int mat[3][3];
    int linha, coluna;
    
    //Entrada
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<3; coluna++){
            printf("Informe um valor inteiro para lin %d e col %d: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }
    
    //Saída
    printf("\nMatriz: \n");
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<3; coluna++){
            printf(" | %d | ", mat[linha][coluna]);
        }
        printf("\n");
    }
    
    printf("\nMatriz(sem a diagonal principal): \n");
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<3; coluna++){
            if(linha != coluna){
                printf(" | %d | ", mat[linha][coluna]);
            }else{
                printf(" |   | ");
            }
    }
    printf("\n");
    }
    
    printf("\nValores da matriz(sem a diagonal principal): \n");
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<3; coluna++){
            if(linha != coluna){
                printf("%d ", mat[linha][coluna]);
            }
        }
    }
    
    printf("\n\n");
    
    system("pause");
    return 0;
}

