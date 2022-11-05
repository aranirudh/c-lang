# include<stdio.h>

// Write a program to find if a character entered by user is upper case or not.

int main() {

   char ch;
   printf("Enter the character ");
   scanf("%c", &ch);

   if (ch >= 'a' && ch <= 'z') {
    printf("This is a lower case letter \n");
   }

   else if (ch >= 'A' && ch <= 'Z') {
    printf("This an upper case letter \n");
   }

   else{
    printf("This not a letter \n");
   }

   return 0;
}