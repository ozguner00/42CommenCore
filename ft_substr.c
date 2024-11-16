#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (!s) return 0;

    size_t s_len = strlen(s);
    if (start >= s_len) return strdup("");

    if (s_len - start < len) len = s_len - start;

    char *substr = (char*) malloc((len + 1) * sizeof(char));
    if (substr == 0) return 0;

    size_t i = 0;
    while (i < len) {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return substr;
}

