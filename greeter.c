#include <stdio.h>

int main(int argc, char **argv) {
	char name[256];
	printf("Please enter your name: ");
	fgets(name, sizeof(name), stdin);

	printf("Hello, wurld!\n");
	printf("Hello, %s!\n", name);
	return 0;
}
