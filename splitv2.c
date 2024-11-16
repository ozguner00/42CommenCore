#include "libft.h"
int ft_split_size(char const *str, char c)
{
	char *s = (char*)str;
	int count_c = 0;
	int i = 1;
	while(s[i] != '\0')
	{
		if(s[i] == c /*&& s[i-1] != c*/)
			count_c ++;
		i++;
	}
        /*if(count_c > 0)
		count_c++;
*/
	return (count_c);
}
char *ft_save_words(char *s, int start, int end)
{
	int len = end - start;
	int i = 0;
	char *word = (char*) malloc((len+1) *sizeof(char));
	while(i < len) 
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return word;
}
char **ft_split(char const *str, char c)
{	
	char *s = ft_strtrim(str,&c);
	char** ff = (char**)malloc((ft_split_size(s,c)+1) * sizeof(char*));
	if(!ff)
		return NULL;
	size_t ffindex = 0;
	if(s[0] == '\0'){
		  ff[ffindex] = NULL;
	return ff;}
	size_t start = 0;
	size_t end = 0;
	while(s[end] != '\0')
	{
		if(s[end] == c && s[end+1] != c)
		{
			ff[ffindex] = ft_strtrim(ft_save_words(s,start,end),&c);
			ffindex++;
			start = end+1;
		}
		end++;
	}
	ff[ffindex++] = ft_strtrim(ft_save_words(s,start,end),&c);
	ff[ffindex] = NULL;
	return ff;
}

