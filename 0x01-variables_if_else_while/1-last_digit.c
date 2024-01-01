/*
 * File: 1-last_digit.c
 * Desc: It checkts if the last number of the randomly generated integers is < 5,  =0 or < 6 && > 0
 * Author: absheriff
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
 * main - prints the last digit of the randomly generated numbers and check for some conditions
 */
int main(){
	int n, last;

	srand(time(0));
	n = rand() - (RAND_MAX/2);

	//the number of string generated is saved inside gstr;
	char gstr[20];

	sprintf(gstr, "%d", n);
	last = gstr[strlen(gstr)-1];
	last = last - '0';
	
	if(n<0) last = last * -1;

	if(last > 5) 
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if(last == 0) 
		printf("Last digit of %d is %d and is 0", n, last);
	else if(last < 6 && last != 0) 
		printf("Last digit of %d is %d  and is less than 6 and not 0", n, last);

	printf("\n");
}

