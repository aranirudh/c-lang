# include<stdio.h>

//Converting any float value into its int value.

int main() {
    float num1;
    printf("Enter the number ");
    scanf("%f", &num1);
    int converted_value = (int)num1;
    printf("The output is %d", converted_value);
    return 0;
}
