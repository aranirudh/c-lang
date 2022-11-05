# include<stdio.h>

// Search on net about nested loops and print this pattern.
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

int main () {
    
    char star = '*';

    for(char i = 1 ; i <= 5 ; i ++) {
            
            for(char j = 1 ; j <= 5 ; j ++)  {

                    printf("%c ", star);
            }
            printf("\n");
    }

    return 0;
}