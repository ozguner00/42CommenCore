#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p = (const unsigned char*)s1;
	const unsigned char *p2 = (const unsigned char*)s2;
	size_t i = 0;

	while(i < n){
		if(p[i] != p2[i])
			return p[i] - p2[i];

		i++;
	}
	return 0;
}
