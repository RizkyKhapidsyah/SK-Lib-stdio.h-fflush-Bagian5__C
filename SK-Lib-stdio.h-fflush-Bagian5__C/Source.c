#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	int x;
	char mybuffer[1024];

	setvbuf(stdout, mybuffer, _IOFBF, 1024);
	printf("Enter an integer - ");

	fflush(stdout);

	scanf("%d", &x);
	printf("You have entered %d.", x);

	_getch();
	return 0;
}

