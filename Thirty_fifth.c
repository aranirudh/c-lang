# include<stdio.h>

//Practicing Ternary statements.

int main() {
        /*  1 - Mon
        2 - Tues
        3 - Wed
        4 - Thurs
        5 - Fri
        6 - Sat
        7 - Sun */
        
        int num1;
        printf("Enter the number ");
        scanf("%d", &num1);

        switch (num1)
        {
        case 1 : printf("Monday");
                break;
        case 2 : printf("Tuesday");
                break;
        case 3 : printf("Wednesday");
                break;
        case 4 : printf("Thursday");
                break;
        case 5 : printf("Friday");
                break;
        case 6 : printf("Saturday");
                break;
        case 7 : printf("Sunday");
                break;
        default: printf("Not a valid day");
                break;
        }
        

        return 0;
}