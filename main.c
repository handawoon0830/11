#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[5];
	int average;
	
	for (i=0; i<5; i++)
	{
		printf("grade[%i]= ", i);
		scanf("%d", &grade[i]);
	}
	/*
	int sum = 0;
	
	for (i=0; i<5; i++)
	{
		int *j = &grade[i];
		printf("grade[%i]= %i\n", i, *j);
		sum += *j;
	}
	
	int average;
	
	average= sum/5;
	printf(" average= %i\n",average);
	*/
	
	for (i=0; i<5; i++)
	{
		printf("grade[%i]= %i\n", i, *(grade+i));
		average= (average + *(grade +i));
		
	}
	
	average= average/5;
	
	printf(" average= %i\n",average);
	return 0;
}

