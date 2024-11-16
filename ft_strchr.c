
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr = '\0';
	while (*s)
	{
		if (*s == (unsigned char)c)
		{	
			ptr = (char*) s;
			return ptr;
		}
		s++;
	}
	if(*s == (unsigned char) c)
	{
		ptr = (char *) s;
	}
	return ptr;	
}
