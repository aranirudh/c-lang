# include<stdio.h>

//Print the reverse of the table for a number n.

int main() {

    int n;
    printf("Enter the number ");
    scanf("%d", &n);

    for(int i = 10 ; i >= 1 ; i--) {
        printf("%d \n", n * i);
    }

    return 0;
}