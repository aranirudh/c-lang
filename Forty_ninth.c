# include<stdio.h>

//Practising break statement.

int main() {

    for(int i = 0 ; i <= 5 ; i++) {
        if(i == 3){
            break;
        }
        printf("%d \n", i);
    }

    printf("End \n");

    return 0;
}