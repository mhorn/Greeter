#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	char name[256];
	int n;
	printf("Please enter your name: ");
	fgets(name, sizeof(name), stdin);
	n = strlen(name);
	if (n > 0 && name[n-1] == '\n')
		name[--n] = 0;

	printf("Hello, world!\n");
	
	if (n > 0)
		printf("Hello, %s!\n", name);
	return 0;
}
