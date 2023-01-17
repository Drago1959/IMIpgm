/*
Домашна работа №4 / Задача №1

Даден ви е следния масив в отрязъка от код:

Допишете програма, която:
Извежда сумата на всички елементи от масива;
Извежда произведението на всички елементи от масива;
Извежда средноаритметичната стойност на всички елементи от масива;


*/
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int	main() {
	
	int i, n, SUM, PROD, MEAN;
	n = 6;
	int R[] = {10, 20, 5, 6, 78, 101};
	
	time_t t;
	
	setbuf(stdout, NULL);
	SUM=0;
	PROD=1;
	printf("\nCurrent array is:\n");
	for ( i = 0 ; i < n ; i++ ) {
	  printf("%d ", R[i]);
	  SUM += R[i];
      PROD *= R[i];
    }
   
	printf("\n\nSUM of all values in this serie is: %d\nand \nMEAN value for this serie is: %.3f\nand\nProduct of allitems in aray is: %d\n", SUM, (double)SUM/n, PROD);  
	return 0;	
}