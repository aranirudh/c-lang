# include<stdio.h>

//Practicing else if conditional statement.

int main() {

    int marks;
    printf("Enter the marks ");
    scanf("%f", &marks);

    if (marks <= 100 && marks >= 91)
    {
        printf("A+");
    }

    else if (marks < 91 && marks >= 81)
    {
        printf("A");
    }
    
    else if (marks < 81 && marks >= 71)
    {
        printf("B+");
    }

    else{
        
        printf("B");
    }

    return 0;
}
    
    
    