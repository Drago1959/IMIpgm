/*
Да се направи програма, при която се генерират 20 произволни числа между 0 и 20. 
Изведете числата в стандартния изход;
Изчислете сумата на всички числа;
Изчислете средноаритметичната стойност на числата
Изведете най-голямото и най-малкото от числата.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main() {
	
int i, n, MIN, MAX, SUM, MEAN;
int R[20];
time_t t;
	
   n = 20;
   setbuf(stdout, NULL);
   
/*	   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   printf("\nCurrent random serie is:\n");
   for ( i = 0 ; i < n ; i++ ) {
	  R[i] =  rand() % 20;
      printf("%d ", R[i]);
   }
   MIN = MAX = R[0];
   SUM=0;
   for ( i = 0 ; i < n ; i++ ) {
	  if(R[i]<MIN) 		MIN = R[i];
      else if(R[i]>MAX) MAX = R[i];
	  SUM += R[i];
   }	
   printf("\n\nMIN value in this serie is: %d\nand \nMAX value in this serie is: %d\n", MIN, MAX);
   printf("\n\nSUM of all values in this serie is: %d\nand \nMEAN value for this serie is: %.3f\n", SUM, (double)SUM/n);
   return 0;	
}