#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int foo(int argc, char *argv[]) {
	
	int answer = 59;
	int num;
	int i=0;
	
	do {
		printf("Guess a number :");
		scanf_s("%d", &num);
		
		if (num > answer)
		{
			printf("high!\n");
		}
		else if (num < answer)
		{
			printf("low!\n");
		}
		i++;
	} while (num != answer);
	
	printf("Congratulation! trials:%i\n", i);
	
	
	return 0;
}
