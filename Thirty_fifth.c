# include<stdio.h>

//Practicing Switch.

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

        switch(num1) {

        case 1 :
                printf("Monday \n");
                
                break;
        case 2 : 
                printf("Tuesday \n");

                break;
        case 3 : 
                printf("Wednesday \n");

                break;
        case 4 :
                printf("Thursday \n");
                
                break;

        case 5 :
                printf("Friday \n");

                break;

        case 6 :
                printf("Saturday \n");

                break;

        case 7 : 
                printf("Sunday \n");

                break;

        default : printf("Not a valid day \n");
        }

        return 0;
}