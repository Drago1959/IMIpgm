/*
Домашна работа №3 / Задача №3

Въведете ел. съпротивление на N (въвежда се от потребителя) на брой резистори:
Изчислете еквивалентното съпротивление, ако всички резистори са свързани последователно;
Изчислете еквивалентното съпротивление, ако всички резистори са свързани паралелно;
*/
#include <stdio.h>

int	main() {
	
long int	N, R[10], i, RS=0;
double S[10], SS=0.0;

	setbuf(stdout, NULL);
	
	printf("\nCalculates equivalent resistanse of n resistors in parallel and in serial.\nEnter the number of resistors (max number of resistors is 10):");
	scanf("%d", &N);
//	printf("\n Now enter resistors' value in ohms\n");
	for (i=0; i<N; i++) {
		printf("Enter the lenght of the R%d =", i+1);
		scanf("%d", &R[i]);
		while (R[i]<=0) {
		printf("Resistanse must be positive value!\nEnter R%d =", i+1);	
		scanf("%d", &R[i]);
		}
		
	}	
	SS = 0.0;
	RS = 0;
	for (i=0; i<N; i++) {
		S[i] = 1.0/R[i];
		SS += S[i];
		RS += R[i];
	}	
		
	printf("\nSerial resistanse is: %.3f ohm and \nParallel resistanse is %.3f ohm\n", 1.0*RS, 1.0/SS);
	return 0;	
}