#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char heap[6000000] = {0};
	char buff;
	int nbyte = 0;
	int i = 0;
	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	while ((nbyte = read(fd, &buff, 1)) && nbyte > 0)
	{
		heap[i++] = buff;
		if (buff == '\n')
			break ;
	}
	heap[i] = 0;
	if (nbyte <= 0 && i == 0)
		return (NULL);
	return (ft_strdup(heap));
}
