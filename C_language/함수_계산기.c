#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float add(float x, float y) {
	return x + y;
}

float sub(float x, float y) {
	return x - y;
}

float mul(float x, float y) {
	return x * y;
}

float div(float x, float y) {
	return x / y;
}

void main() {
	float a, b;
	char op;

	while (1) {
		printf(" 수식을 입력하세요. (예 : 2 + 3) \n");
		scanf("%f %c %f", &a, &op, &b);

		if (op == '?') break;
		switch (op) {
		case '+':
			printf("%f %c %f = %f\n", a, op, b, add(a, b));
			break;
		case '-':
			printf("%f %c %f = %f\n", a, op, b, sub(a, b));
			break;
		case '*':
			printf("%f %c %f = %f\n", a, op, b, mul(a, b));
			break;
		case '/':
			printf("%f %c %f = %f\n", a, op, b, div(a, b));
			break;
		default:
			printf("연산자를 잘못 입력하셨습니다.");
			break;
		}
	}
}
