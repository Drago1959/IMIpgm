/*
Домашна работа №1 / Задача №3

Създайте С програма, в която се въвеждат дължината на двете основи и височината на трапец като цели числа. 
Да се изчисли и изведе в стандартния изход лицето му.
*/

#include <stdio.h>

int	main() {
	
int	a, b, h;
	setbuf(stdout, NULL);
	printf("This program calculates the area of a trapezoid.\n "); 
	printf("\nEnter the lenght of 1-st parallel side : ");
	scanf("%d", &a);
	printf("Enter the lenght of 2-nd parallel side : ");
	scanf("%d", &b);	
	printf("Enter the higth of rectangle: ");
	scanf("%d", &h);
	printf("\nThe area of trapezoid is: %d", ((a+b)/2)*h);
	return 0;	
}