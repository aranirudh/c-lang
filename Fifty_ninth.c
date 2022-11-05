# include<stdio.h>

// Write a program to check if a number is prime or not.

int main() {
    int n, count = 0 ;
    printf("Enter the number ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++) {
        
        if(n % i == 0){

           count = count + 1;

        }
    }

        if(count == 2) {
            printf("Prime \n");
        }

        else{
            printf("Not Prime \n");
        }
    
    
    


return 0;
}