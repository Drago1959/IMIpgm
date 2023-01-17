/*
Домашна работа №3 / Задача №1

Да се разработи програма, която генерира следните последователности от числа използвайки for, while и do-while цикли:
от 0  до 20  през 1;
от 20 до 30  през 1;
от 10 до 100 през 5; 
от 20 до 10  през 1;
от 1000 до 0 през 100.
*/



#include <stdio.h>

int	main() {
	
int	 i, v, u;
int arr10[21];
int arr11[21];
int arr12[21];

int arr20[11];
int arr21[11];
int arr22[11];

int arr30[19];
int arr31[19];
int arr32[19];

int arr40[11];
int arr41[11];
int arr42[11];

int arr50[11];
int arr51[11];
int arr52[11];

	setbuf(stdout, NULL);
	
//--- 1 --- ||от 0 до 20 през 1|| 
	printf("\n");
	for (int i = 0; i <=20; i++) {
		arr10[i] = i;
		printf("%d , ", arr10[i]);
	}
	printf("""for""-cycle:\n");

	i=0;
    while (i<=20) {
		arr11[i]=i;
		printf("%d , ", arr11[i]);
		i++;
		
	};
	printf("""while""-cycle:\n");

	i=0;
	do {
		arr12[i]=i;
		printf("%d , ", arr12[i]);
		i++;
				
	} while (i<=20);
	printf("""do-while""-cycle:\n");
	
//--- 2 --- ||от 20 до 30 през 1||
	for (int i = 0; i <=10; i++) {
		arr20[i] = i+20;
		printf("%d , ", arr20[i]);
	}
	printf("""for""-cycle:\n");

	i=0;
    while (i<=10) {
		arr21[i]=i+20;
		printf("%d , ", arr21[i]);
		i++;
	};
	printf("""while""-cycle:\n");
	
	i=0;
	do {
		arr22[i]=i+20;
		printf("%d , ", arr22[i]);
		i++;
	} while (i<=10);
	printf("""do-while""-cycle:\n");

//--- 3 --- ||от от 10 до 100 през 5||
	
	for (int i = 0; i <=18; i++) {
		arr30[i] = 10+5*i;
		printf("%d , ", arr30[i]);
	};
	printf("""for""-cycle:\n");	

	i=0;
    while (i<=18) {
		arr31[i] = 10+5*i;
		printf("%d , ", arr31[i]);
		i++;
	};
	printf("""while""-cycle:\n");	
	i=0;
	do {
		arr32[i] = 10+5*i;
		printf("%d , ", arr31[i]);
		i++;
	}while (i<=18);
	printf("""do-while""-cycle:\n");
	
//--- 4 --- ||от 20 до 10 през 1||
	for (int i = 0; i <=10; i++) {
		arr40[i] = 20-i;
		printf("%d , ", arr40[i]);
	}
	printf("""for""-cycle:\n");

	i=0;
    while (i<=10) {
		arr41[i] = 20-i;
		printf("%d , ", arr41[i]);
		i++;
	};
	printf("""while""-cycle:\n");
	
	i=0;
	do {
		arr42[i]=20-i;
		printf("%d , ", arr42[i]);
		i++;
	} while(i<=10);
	printf("""do-while""-cycle:\n");

//--- 5 --- ||от 1000 до 0 през 100||
	for (int i = 0; i <=10; i++) {
		arr50[i] = 1000-i*100;
		printf("%d , ", arr50[i]);
	}
	printf("""for""-cycle:\n");

	i=0;
    while (i<=10) {
		arr51[i] = 1000-i*100;
		printf("%d , ", arr51[i]);
		i++;
	};
	printf("""while""-cycle:\n");
	
	i=0;
	do {
		arr52[i]=1000-i*100;
		printf("%d , ", arr52[i]);
		i++;
	} while(i<=10);
	printf("""do-while""-cycle:\n");
	printf("\n");
	return 0;
}

