# include<stdio.h>
# include<math.h>
       
       //Finding the remainder of a division.
       
        int main() {
        
        int num1, num2;
        printf("Enter the value of the first number ");
        scanf("%d", &num1);

        printf("Enter the value of the second number ");
        scanf("%d", &num2);
        
        printf("The remainder of the division is %d", ( num1 % num2));
    return 0;
}
    