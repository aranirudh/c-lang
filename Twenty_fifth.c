# include<stdio.h>

//Practicing Logical Operators

int main() {
    
    float num1, num2;
    printf("Enter the first number ");
    scanf("%f", &num1);

    printf("Enter the second number ");
    scanf("%f", &num2);

    printf("%d", !(num1 > num2) || (num1 < num2));

    return 0;
}    