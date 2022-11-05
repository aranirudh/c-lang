# include<stdio.h>

//Practising break statements.
//Keep taking numbers as input from user until user enters an odd number.

int main() {

int n;
        do{
            printf("Enter the number \n");
            scanf("%d", &n);
            
            if(n % 2 != 0){
                break;
            }
        }

        while(1);

        printf("Thank you \n");
        return 0;
}
        
    
    