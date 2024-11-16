#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
	unsigned char* p = s;
	size_t i = 0;

	while(n > 0)
	{
		p[i] = 0;
		n--;
		i++;
	}
}
