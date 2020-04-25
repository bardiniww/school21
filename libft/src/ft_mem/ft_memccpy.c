#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*in;
	unsigned char		*out;

	i = 0;
	in = (const unsigned char*)src;
	out = (unsigned char*)dest;
	while (i < n)
	{
		out[i] = in[i];
		if (in[i] == (unsigned char)c)
			return (&(out[i + 1]));
		i++;
	}
	return (NULL);
}
