#include <stddef.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{	
	if (!dst && !src)
		return (dst);
	unsigned char *p = (unsigned char*)dst;
	const unsigned char *s = (const unsigned char*)src;
	size_t i = 0;
	
	while(i < n ) 
	{
		p[i] = s[i];
		i++;
	}
	return dst;
}
