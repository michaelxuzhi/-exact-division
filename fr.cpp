#include <stdio.h>

bool Multiple(int n1, int n2)
{
	if (0 == n1) 
		return false;
	return !(n2%n1); 
}

int main()
{
	int n1, n2;
	while (scanf("%d%d", &n1, &n2)) {
		if (Multiple(n1, n2)) {
			printf("true\n");
		} else {
			printf("false\n");
		}
	}

	return 0;
}