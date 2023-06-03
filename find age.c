/*
 ============================================================================
 Name        : find.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cdate, dob, cal;
	printf("Enter current year:- ");
	scanf("%d", &cdate);
	printf("Enter birth year:- ");
	scanf("%d", &dob);
	cal = cdate - dob;
	printf("Your age: %d", cal);
	return EXIT_SUCCESS;
}
