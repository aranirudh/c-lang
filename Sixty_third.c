# include<stdio.h>

// Practising nested loops.

int main ()  {

    int n = 5;

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= i ; j++){
            printf("*");
        }
        
        for(int k = 1 ; k <= 2 * (n - i)  ; k ++){    
            printf(" ");
        }                              

        for(int l = 1 ; l <= i ; l ++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}