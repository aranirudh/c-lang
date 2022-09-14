# include<stdio.h>

/*Practice Qs 8

Print 1 or 0 for the following statements:
a. If it's Sunday & it's snowing -> true  (Assume the variables as it_is_sunday and it_is_snowing as 1 each as they are true)
b. If it's Monday or it's raining -> true (Similar to the previous question)
c. If a number is greater than 9 & less than 100 -> true  (two digit number) */

int main() {
    // Problem 1
    int it_is_sunday = 1; // input can be taken instead of hard coding the values
    int it_is_snowing = 1; // input can be taken instead of hard coding the values

    printf("%d", it_is_snowing && it_is_sunday);

    // Problem 2
    int it_is_moday = 1; // input can be taken instead of hard coding the values

    printf("%d", it_is_snowing && it_is_sunday);

    // Problem 3
    int num1;
    printf("Enter the number ");
    scanf("%d", &num1);

    printf("%d", num1>9 && num1<100);

    return 0;
}

