/*
Домашна работа №2 / Задача №1 / сх. №2
...
Реализирайте следните електрически схеми като логически изрази. 
Използвайте следния шаблон, при който е реализирано последователно свързване на два ключа.
*/

#include <stdio.h>

int	main() {
	
int	a, b, c;
	setbuf(stdout, NULL);
	printf("\nEnter the state of the switches A, B and C( 0(zero) means that switch in OFF, any other value means that swith is ON : ");
	printf("\nEnter the state of the switches A, : ");
	scanf("%d", &a);
	printf("Enter the state of the switches B, : ");
	scanf("%d", &b);	
	printf("Enter the state of the switches C, : ");
	scanf("%d", &c);
	if (a||b||c) 	printf("\nLamp is ON");
	else			printf("\nLamp is OFF");
	return 0;
}