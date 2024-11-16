#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char * p = (unsigned char*)s;
	unsigned char value = (unsigned char) c;
	size_t i = 0;
	while(i < n)
	{
		if(p[i] == value)
			return (void *)(p + i);

		i++;
	}
	
	return 0;
}
