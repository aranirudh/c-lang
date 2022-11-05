#include<stdio.h>

// Write a program to print prime numbers 1 to n where n is the number given by the user

int main() {

    int n;
    printf("Enter the number \n");
    scanf("%d", &n);

    int factors = 0;

    for(int i = 1 ; i <= n ; i++) {

        if(n % i == 0) {
            factors++;
        }
    }

    if(factors == 2) {
        printf("The number is prime \n");
    }

    else{
        printf("The given number is not prime \n");
    }

    return 0;
}

    
