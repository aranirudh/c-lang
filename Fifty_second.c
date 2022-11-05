# include<stdio.h>

//Practising continue statement.

int main () {

    for(int i = 1 ; i <= 5 ; i++) {
        if(i == 4){  //This means this round in the loop is skipped.
            continue;
        }
        printf("%d \n", i);
    }    

    return 0;
}