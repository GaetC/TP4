#include <stdlib.h>
#include <stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int MyTab1[TAILLETAB1];

int main() {
	for (int i = 1; i < 21; i++) {
		*(MyTab1 + i) = i;
		printf("%d %c ", *(MyTab1 + i), SEPARATEUR);
	}
	printf("\n");
	int* ptr;
	ptr = &MyTab1[20];
	for (int i = 0; i < 20; i++) {
		printf("%d %c ", *ptr, SEPARATEUR);
		ptr--;
	}
}