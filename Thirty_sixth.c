# include<stdio.h>

/* Write a program to check if a student passed a failed
  marks > 30 is pass
  marks <= 30 is fail     */ 

int main() {
    int marks;
    printf("Enter the marks ");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("FAIL");
    }

    else if (marks > 30 && marks <= 100)
    {
        printf("Pass");
    }
    
    else
    {
        printf("Invalid marks");
    }
    
    return 0;
}    