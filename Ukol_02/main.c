#include <stdio.h>
#include <stdlib.h>
int main(){
    int obrazec = 0;
    int a = 0, b = 0;
    printf("Zadejte hodnotu obrazce a parametry A B: \n");
    scanf("%d %d %d", &obrazec, &a, &b);

    switch(obrazec){
        case 1: {
            for(int i = 1, i < a, i++){
                for(int j = 1, j < b, j++){
                    printf("x");
                }
                printf("\n");
            }
            break;
        }
        case 2: {
            for(int i = 1, i < a, i++){
                for(int j = 1, j < b, j++){
                    if((i = 1 || i = a-1) || (j = 1 || j = b-1) )printf("x");
                }
                printf("\n");
            }
        }
        case 3: {
            
        }
        case 4: {
            
        }
        case 5: {
            
        }
        case 6: {
            
        }
        case 7: {
            
        }
    }

    for(int i = 0;i<10;i+2){
        printf("%d ",i);
    }
    return 0;
}