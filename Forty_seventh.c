# include<stdio.h>

//Print the sum of the first n natural numbers. Also print them in the reverse order.

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int sum = 0;

    for(int i = n ; i >= 1 ; i--) {
        sum = sum + i;
        printf("%d \n", i);
    }

    printf("The sum is %d \n", sum);

    return 0;
}
