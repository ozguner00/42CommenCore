void ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	 if (s == 0 || f == 0)
        return;

    int i = 0;
    while (s[i] != '\0') {
        f(i, &s[i]);
        i++;
    }
}	
