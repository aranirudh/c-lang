# include<stdio.h>

// Write a program to find if a character entered by user is upper case or not.

int main() {

    char ch;
    printf("Enter a letter ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') 
    {
        printf("Lower Case");
    }
    
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case");
    }
    
    else
    {
        printf("Not applicable");
    }

    return 0;
}
    