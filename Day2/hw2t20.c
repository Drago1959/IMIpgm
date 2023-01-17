/*
Домашна работа №2 / Задача №2

Направете програма, в която да изчислите стойността на съпротивлението за светодиод по следната схема:
...
Потребителят да въведе:
Uin - захранващо напрежение;
Uf - напрежение на отпушване на светодиода;
I - желаният ток на светодиода - в милиампери.

Изход:
Да се изведе съпротивлението в килооми, закръглено до третия знак след запетаята.
*/


#include <stdio.h>

int	main() {
	
int	 i, v, u;
//double r;
	setbuf(stdout, NULL);
	printf("\nCalculates resistor value [in kiloohms] based on Led forward voltage and supply Voltage ");
	printf("\nEnter supply voltage in [Volts] : ");
	scanf("%d", &u);
	printf("Enter the forword voltage in [Volts] : ");
	scanf("%d", &v);	
	printf("Enter the forword current in [miliamps] : ");
	scanf("%d", &i);
	printf("The resistor value is: %.3f kOhms", (double)(u-v)/i);
	return 0;
}