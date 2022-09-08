#include <stdio.h>
/**
* main - main block
* Description: find size of data-types
* return: 0
*/
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(float));
	printf("%lu", sizeof(long long int));
	return (0);
}
