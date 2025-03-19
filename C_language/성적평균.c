#include <stdio.h>
#define STU 3
#define SUB 3
#define COL SUB+2

void main()
{
	int arr[STU][COL] = {0};
	int i, j, sum;
	int rnk = 1;

	for (i = 0; i < STU; i++) {
		sum = 0;
		printf("[%c학생] \n", 'A' + i);
		for (j = 0; j < SUB; j++) {
			switch (j) {
			case 0:
				printf("Eng :");
				break;
			case 1:
				printf("Kor :");
				break;
			case 2:
				printf("Math :");
				break;
			}
			scanf_s("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][j] = sum / SUB;
	}

	for (i = 0; i < STU; i++) {
		arr[i][4] = 1;
		for (j = 0; j < STU; j++) {
			if (arr[i][3] < arr[j][3]) arr[i][4]++;
		}
	}

	printf("\t\tEng\tKor\tMath\tAvg\tRank\n");
	for (i = 0; i < STU; i++) {
		printf("[%c학생] \t", 'A' + i);
		for (j = 0; j < COL; j++) {			
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
}
