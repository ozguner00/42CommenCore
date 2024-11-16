#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	size_t len = ft_strlen(s);
	if (!s)
		return ;
	write(fd, s, len);
}
