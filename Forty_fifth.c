# include<stdio.h>

//Print the numbers from 0 to n, if n is given by the user using while loop.

int main() {

    int n;
    printf("Enter the number ");
    scanf("%d", &n);

    int i;
    
    while(i <= n) {

        printf("%d \n", i);
        i++;

    }

    return 0;
}