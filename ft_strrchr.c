char	*ft_strrchr(const char *s, int c)
{
	char	*ptr = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
	{
		ptr = (char*)s;	
	}
	return (ptr);
}
