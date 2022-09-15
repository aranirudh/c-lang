# include<stdio.h>

//Practicing if and else conditional statements.

int main() {
    int marks;
    printf("Enter the marks ");
    scanf("%d", &marks);
    
    if (marks >= 91 && marks <= 100)
    {
        printf("A+"); 
    }

    else {
        printf("A");
    }

    return 0;
}
    