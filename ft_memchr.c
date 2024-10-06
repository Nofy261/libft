#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s2 = (const unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
			return ((void *)&s2[i]);
		i++;
	}
	return (NULL);
}
