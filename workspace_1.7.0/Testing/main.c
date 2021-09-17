/*
 * main.c
 *
 *  Created on: August 4, 2021
 *      Author: User
 */

#include <stdio.h>

int main(void)
{
	char age;

	printf("Enter your age:\t");
	fflush(stdout);
	scanf("%c", &age);

	printf("The ASCII value of age is %u",age);

	return 0;

}//end function main
