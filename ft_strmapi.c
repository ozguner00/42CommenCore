#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if(s == NULL || f == NULL)
		return NULL;
	size_t len = ft_strlen(s);
	char * str = malloc((len+1)*sizeof(char));
	if(str == NULL)
		return NULL;
	size_t i = 0;
	while(i < len){
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}
