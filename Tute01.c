/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1;
  float mark2;

  printf("Enter mark 1 :");
  scanf("%f",&mark1);
  printf("Enter mark 2 :");
  scanf("%f",&mark2);

  printf("\n\nthe average of the two marks is :%.2f",(mark1 + mark2)/2.0);
  
  return 0;
}

