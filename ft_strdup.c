#include "libft.h"
char *ft_strdup(const char *s1){
	size_t len = ft_strlen(s1);
	char* ptr = (char*) malloc((len+1) * sizeof(char)); 
	if(ptr == NULL)
		return NULL;
	size_t i = 0;
	while(i < len){
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}
