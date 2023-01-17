/*
Домашна работа №4 / Задача №3

Да се направи програма, при която се създава масив от 10 реални числа. 
Да се въведат от стандартния вход.
Изведете числата на масива в стандартния изход;
Изведете сумата на числата и броя на числата между 5 и 10.
*/
#include <stdio.h>

int	main() {
	int i, n, PROD;
	n = 3;
	double R[n], SUM, MEAN;

	setbuf(stdout, NULL);
	
	printf("\nPlease, enter %d fp numbers.\n", n);
	SUM=0;
	for ( i = 0; i < n; i++) {
	  scanf(" %lf, ", &R[i]);
	  SUM += R[i];
    }
	printf("\nYou enter:\n", n);
	PROD=0;
	for ( i = 0; i < n; i++) {
	  printf(" %.3lf, ", R[i]);
	  if(((R[i]-5.0)>0.000001)&&((R[i]-10.0)<0.000001)) PROD++;
    }

 	printf("\nSum is: %.3f, between 5 and 10 are %d numbers.\n",SUM, PROD);  
//	printf("\n\nSUM of all values in this serie is: %d\nand \nMEAN value for this serie is: %.3f\nand\nProduct of allitems in aray is: %d\n", SUM, (double)SUM/n, PROD);  
	return 0;	
}