/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1, num2, sum, average;

  printf("Enter the mark 1: ");
  scanf("%d",&num1);

  printf("Enter the mark 2: ");
  scanf("%d",&num2);

  sum = num1 + num2;

  average = sum/2;

  printf("average mark = %d",average);

  return 0;
}

