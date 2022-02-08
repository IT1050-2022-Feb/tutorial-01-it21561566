/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sum , mark ;
  float avg;
     for( int i=1 ; i<=2 ; i++){
      printf("Subject No.%d Marks :" , i);
      scanf("%d" , &mark);

      sum = sum + mark;
      avg = (float)sum / i;
      }
   printf("\nTotal of the 2 Marks : %d\n" , sum);
   printf("Average of the 2 Marks : %.2f\n" , avg);

   return 0;
}

