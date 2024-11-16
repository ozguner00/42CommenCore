#include "libft.h"
int main(int ac, char** av)
{
	
	printf("\n%s\n",av[1]);
	char *str = ft_strrchr(av[1],'\0');
	printf("%s\n",av[1]);
	*str = 'K';
	str = "mehmet";
	printf("%s\n",av[1]);
	printf("%s\n",av[1]);

}
