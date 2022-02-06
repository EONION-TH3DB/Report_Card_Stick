#include <stdio.h>
#include <stdlib.h>
#include "Console.h"
#include <Windows.h>

int main()
{
	int i, j;
	int arr[5];
	
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 10; i+=2) {
		for (j = 20; j > 20 - arr[i/2]; j--) {
			GotoXY(i, j);
			printf("*");
		}
	}

	system("pause");
	return 0;
}