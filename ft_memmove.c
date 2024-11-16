#include <stddef.h>
#include <stdio.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
				return (dst);
	unsigned char *p = (unsigned char*) dst;
	const unsigned char *s = (const unsigned char*) src;
	size_t i;
	
	if (p < s) {
        i = 0;
        while (i < len) {
            p[i] = s[i];
            i++;
        }
    } else {
        i = len;
        while (i > 0) {
            p[i - 1] = s[i - 1];
            i--;
        }
    }	return dst;
}

