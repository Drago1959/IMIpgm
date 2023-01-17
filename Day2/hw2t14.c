/*
Домашна работа №2 / Задача №1 / сх. №4
...
Реализирайте следните електрически схеми като логически изрази. 
Използвайте следния шаблон, при който е реализирано последователно свързване на два ключа.
*/

#include <stdio.h>

int	main() {
	
int	a, b, c, d, e;
	setbuf(stdout, NULL);
	printf("\nEnter the state of the switches A, B, C, D and E( 0(zero) means that switch in OFF, any other value means that swith is ON : ");
	printf("\nEnter the state of the switches A, : ");
	scanf("%d", &a);
	printf("Enter the state of the switches B, : ");
	scanf("%d", &b);	
	printf("Enter the state of the switches C, : ");
	scanf("%d", &c);
	printf("Enter the state of the switches D, : ");
	scanf("%d", &d);
	printf("Enter the state of the switches E, : ");
	scanf ("%d", &e);
	if (((a&&b)||(c&&d))&&e)	printf("\nLamp is ON");
	else						printf("\nLamp is OFF");
	return 0;
}