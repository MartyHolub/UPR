#include <stdio.h>
#include <stdlib.h>
int main(){
    int obrazec = 0;
    int a = 0, b = 0;
    printf("Zadejte hodnotu obrazce a parametry A B: \n");
    scanf("%d %d %d", &obrazec, &a, &b);

    switch(obrazec){
        case 0: {
            for(int i = 0; i < b; i++){
                for(int j = 0; j < a; j++){
                    printf("x");
                }
                printf("\n");
            }
            break;
        }
        case 1: {
            for(int i = 0; i < b; i++){
                for(int j = 0; j < a; j++){
                    if(j == 0 || j == (a-1))printf("x");
                    else if(i == 0 || i == (b-1))printf("x");
                    else printf(" ");
                }
                printf("\n");
            }
            break;
        }
        case 2: {
            int cislo = 0;
            for(int i = 0; i < b; i++){
                for(int j = 0; j < a; j++){
                    if(j == 0 || j == (a-1))printf("x");
                    else if(i == 0 || i == (b-1))printf("x");
                    else{
                        if(cislo == 10)cislo = 0;
                        printf("%d ", cislo);
                        cislo++;
                    }
                }
                printf("\n");
            }
            break;
        }
        case 3: {
            for(int i = 0; i < b; i++){
                for(int j = 0; j < a; j++){
                    printf("x");
                }
                printf("\n");
            }
            break;
        }
        case 4: {
            
        }
        case 5: {
            
        }
        case 6: {
            
        }
        default: printf("Obrazec neexistuje");
    }
    return 0;
}