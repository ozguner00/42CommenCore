#include <stdio.h>
int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    long long result = 0;

    while (str[i] == '\t' || str[i] == '\r' || str[i] == ' ' ||
           str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
        ++i;

    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        ++i;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        if (result > 2147483647 && sign == 1)
            return 2147483647;
        if (result > 2147483648LL && sign == -1)
            return -2147483648;
        ++i;
    }

    return (int)(result * sign);
}
