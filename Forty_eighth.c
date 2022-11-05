# include<stdio.h>

//Print the table of a number input by the user.

int main() {
    
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int table;

    for(int i = 0 ; i <= 10 ; i ++) {
        table = i * n;
        printf("%d \n", table);
    }

    return 0;
}