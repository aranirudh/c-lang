# include<stdio.h>

//Practicing relational operators.
//We can take float numbers but the output should always be an interger.
int main() {
    float num1, num2;
    printf("Enter the value of the first number ");
    scanf("%f", &num1);

    printf("Enter the value of the second number ");
    scanf("%f", &num2);

    printf("%d", num1 <= num2);

return 0;
}