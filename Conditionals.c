# include<stdio.h>



int main()  {

    int num1 = 50;

    for(int i = 1 ; i <= num1 ; i++) {
        if((i % 5 == 0) && (i % 7 == 0)) {
            printf("* ");
        }
        else{
            printf("%d ", i);
        }
    }
    
    printf("\n");








    return 0;
}