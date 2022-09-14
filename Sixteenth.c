# include<stdio.h>
//Calculating the perimeter of a rectangle

int main() {

float a, b;
printf("Enter the length of the first side ");
scanf("%f", &a);

printf("Enter the length of the second side ");
scanf("%f", &b);

printf("The perimeter of the rectangle is %f", 2 * (a + b));

return 0;
}
