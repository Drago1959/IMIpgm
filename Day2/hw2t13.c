/*
Домашна работа №2 / Задача №1 / сх. №3
...
Реализирайте следните електрически схеми като логически изрази. 
Използвайте следния шаблон, при който е реализирано последователно свързване на два ключа.
*/


#include <stdio.h>

int	main() {
	
int	a, b, c, d;
	setbuf(stdout, NULL);
	printf("\nEnter the state of the switches A, B, C and D( 0(zero) means that switch in OFF, any other value means that swith is ON : ");
	printf("\nEnter the state of the switches A, : ");
	scanf("%d", &a);
	printf("Enter the state of the switches B, : ");
	scanf("%d", &b);	
	printf("Enter the state of the switches C, : ");
	scanf("%d", &c);
	printf("Enter the state of the switches D, : ");
	scanf ("%d", &d);	
	if ((a&&b)||(c&&d))	printf("\nLamp is ON");
	else				printf("\nLamp is OFF");
	return 0;
}