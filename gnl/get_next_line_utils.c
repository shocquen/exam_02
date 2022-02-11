#include "get_next_line.h"

char	*ft_strdup(char *str)
{
	char *ret;
	int len	= 0;
	while (str[len])
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	int	i = -1;
	while (++i < len)
		ret[i] = str[i];
	ret[i] = 0;
	return (ret);
}
