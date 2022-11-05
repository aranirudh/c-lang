# include<stdio.h>

/* Write a program to give grades to a student
1. Marks < 30 is C
2. 30 <= marks < 70 is B
3. 70 <= marks < 90 is A
4. 90 <= marks <= 100 is A+    */

int main() {

    int marks;
    printf("Enter the marks ");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("C");
    }

    else if (marks >= 30 && marks <70) {
        printf("B");
    }

    else if (marks >= 70 && marks < 90) {
        printf("A");
    }

    else if (marks >= 90 && marks <= 100) {
        printf("A+");
    }

    else {
        printf("Not valid marks");
    }

    return 0;
}