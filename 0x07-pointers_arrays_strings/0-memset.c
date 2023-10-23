#include <stdio.h>
#include <string.h>

/**
 * -memset-Fills memory with a constant byte.
 *  @s: Pointer to the memory area to be filled 
 *  @b: The constant byte to fill the memory with.
 *  @n: The number of bytes to fill.
 *
 *  return: A pointer to the filled memory @s. 
 */
char *_memset(char *s, char b, unsigned int n); //impleamantation of the _memset
	for (unsigned int i=0; i < n; i++) {
		s[i] = b
		
	}
      Return s;
int main(void)     
	char buffer[20];
	char *result;

	result = _memset(buffer, 'A', 10);

	printf("Buffer after _memset: %s\n", buffer);
	printf("Result returned by _memset: %s\n", result);

	return 0; 
