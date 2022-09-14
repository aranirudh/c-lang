# include<stdio.h>
# include<math.h>
    
    //The above header is important to find the power of a number.
    
    //Finding the value of the exponents.

    int main() {
        float num1, num2;
        printf("Enter the value of the first number ");
        scanf("%f", &num1);

        printf("Enter the value of the second number ");
        scanf("%f", &num2);
        
        printf("%f", pow(num1,num2));
    return 0;
    }
    
        

