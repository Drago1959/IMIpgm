/*
Домашна работа №4 / Задача №2

Да се направи програма, при която:
 се създава масив от 100 цели числа. 
 Да се запълни с произволни числа между -10 и 10 включително. 
 Изведете числата на масива в стандартния изход;
 Изведете най-голямото и най-малкото от числата.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main() {
	
int i, n, MIN, MAX, SUM, MEAN;
int R[100];
time_t t;
	
   n = 100;
   setbuf(stdout, NULL);
   
/*	   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   printf("\nCurrent random serie is:\n");
   for ( i = 0 ; i < n ; i++ ) {
	  R[i] =  (rand() % 21)-10; // 20 is NOK for +10 limit
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
 //  printf("\n\nSUM of all values in this serie is: %d\nand \nMEAN value for this serie is: %.3f\n", SUM, (double)SUM/n);
   return 0;	
}