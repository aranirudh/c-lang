# include<stdio.h>
int main() {

    int x, y;
    
    printf("Value of x");
    scanf("%d", &x);

    printf("Value of y");
    scanf("%d", &y);

    int sum = x + y;
    printf("The answer is %d", sum);

    return 0;
}
