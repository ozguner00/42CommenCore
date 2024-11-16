#include <stddef.h> 
void *ft_memset(void *b, int c, size_t len){
	unsigned char* p = (unsigned char*)b;
	unsigned char value = (unsigned char)c;
	size_t n = 0;

	while( n < len)
	{
		p[n] = value;
		n++;
	}
	return b;
}
