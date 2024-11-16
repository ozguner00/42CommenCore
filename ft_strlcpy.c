#include "libft.h"
size_t ft_strlcpy(char* restrict dst, const char* restrict src, size_t dstsize)
{
	size_t i = 0;
	size_t len = ft_strlen(src);

	while ( dstsize != 0 && i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if(dstsize > 0)
		dst[i] = '\0';
	
	return len;
}
