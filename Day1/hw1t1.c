/*
Домашна работа №1/ Задача №1

Създайте С програма, в която извежда в конзолата вашето име, триграм и позиция. 
Всяко извеждане да е на нов ред. Да се използва само една printf() функция.
*/
#include <stdio.h>

int	main () {
	setbuf(stdout, NULL);
	printf("\nDragomir\nDKA\nTest-engineer at IMI Bulgaria, BU2\n");
	return 0;	
}