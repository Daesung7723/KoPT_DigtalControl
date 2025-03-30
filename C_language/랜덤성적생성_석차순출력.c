#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STU 5
#define SUB 3
#define COL SUB+2

void main() {
	int arr[STU][COL] = { 0 };

	srand((unsigned int)time(NULL));

	for (int i = 0; i < STU; i++) {
		int sum = 0;
		for (int j = 0; j < SUB; j++) {
			arr[i][j] = rand() % 100;
			sum += arr[i][j];
		}
		arr[i][SUB] = sum / SUB;
	}

	for (int i = 0; i < STU; i++) {
		arr[i][SUB + 1] = 1;
		for (int j = 0; j < STU; j++) {
			if (arr[i][SUB] < arr[j][SUB]) arr[i][SUB + 1]++;
		}
	}

	printf("STU\tEng\tKor\tMath\tAvg\tRank\n");
	for (int i = 0; i < STU; i++) {
		printf("%c", 'A' + i);
		for (int j = 0; j < COL; j++) {
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\nSTU\tEng\tKor\tMath\tAvg\tRank\n");
	for (int i = 0; i < STU; i++) {
		for(int j=0; j<STU; j++){
			if (arr[j][SUB + 1] == (i + 1)) {
				printf("%c", 'A' + j);
				for (int k = 0; k < COL; k++) {
					printf("\t%d", arr[j][k]);
				}
				printf("\n");
			}
		}
	}
}
