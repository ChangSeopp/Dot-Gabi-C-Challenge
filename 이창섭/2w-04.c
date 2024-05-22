#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int b;
	scanf("%d%d", &a, &b);
	printf("%d", a + b);

	pointerFunction(&a, &b);
	printf("%d %d", a, b);
}




void function(int *ptr1, int *ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void pointerFunction(int* ptr1, int* ptr2) {
	*ptr1 = *ptr1 + *ptr2;
	*ptr1 = *ptr1 + *ptr2;
	return;

}
