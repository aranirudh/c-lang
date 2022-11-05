# include<stdio.h>

//Print the factorial of a number.

int main()  {

    int n;
    printf("Enter the number ");
    scanf("%d", &n);

    int factorial = 1;

    for(int i = 1 ; i <= n ; i++){
        factorial = factorial * i;
    }

    printf("The factorial of the given number is %d \n", factorial);

    return 0;  
}

