/*
 ============================================================================
 Name        : test.c
 Author      : MPouivet
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(void) {

	int a = 0;
	a++;

	LOGINFO("var a=%d", a);

	return EXIT_SUCCESS;
}
