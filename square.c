#include <stdio.h>
#include <stdlib.h>

int main(){
    int size ;
    printf("Tamanho do quadrado: ");
    scanf("%d",&size);

    for(int i =0;i<size;i++){
        for(int a = 0;a<size;a++){
            printf("+ ");
        }
        printf("\n");
    }
    return 0;
}
