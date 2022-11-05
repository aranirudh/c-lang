# include<stdio.h>

//Writing a program to check if a number is divisible by 2 or not.

int main() {
   
   int num1;
   printf("Enter the number ");
   scanf("%d", &num1);
    printf("%d", num1 % 2 == 0); 

   return 0;
}