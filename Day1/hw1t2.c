/*
Домашна работа №1/ Задача №2

Създайте С програма, в която се въвеждат дължината и височината на правоъгълник като цели числа. 
Да се изчисли лицето и периметъра. След това да се изведат в стандартния изход.
*/
#include <stdio.h>

int	main() {
	
int	a, b, h;
	setbuf(stdout, NULL);
	printf("This program calculates the area of a rectangle.\n "); 
	printf("\nEnter the lenght of the 1-st side : ");
	scanf("%d", &a);
	printf("Enter the lenght of the 2-nd side : ");
	scanf("%d", &b);	
	printf("\nThe area of trapezoid is: %d", a*b);
	return 0;	
}