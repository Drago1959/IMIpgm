/*
Домашна работа №1 / Задача №4

Да се имплементира алгоритъм за размяна стойностите на две променливи. 
*/

#include <stdio.h>

int	main() {
	
int	a, b, t;
	setbuf(stdout, NULL);
	printf("This program swaps two numbers.\n ");
	printf("\nEnter number a= ");
	scanf("%d", &a);
	printf("Enter number b= ");
	scanf("%d", &b);
	t=a;
	a=b;
	b=t;
	printf("\nThe result is:\n");
	printf("\nnuber a= %d", a);
	printf("\nnuber b= %d\n", b);
	return 0;	
}