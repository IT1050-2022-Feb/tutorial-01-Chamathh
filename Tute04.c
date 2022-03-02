/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2,maximum, minimum, multiply;

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   //maximum
   if(no1>no2){
     maximum = no1;
   }else {
     maximum = no2;
   }

   //minimum
   if(no1>no2){
     minimum = no2;
   }else {
     minimum = no1;
   }

   //multiply
   multiply = no1*no2;

   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   return 0;
}
