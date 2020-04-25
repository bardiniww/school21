#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*in;
	unsigned char	*out;

	i = 0;
	in = (unsigned char*)src;
	out = dest;
	while (i < n)
	{
		out[i] = in[i];
		i++;
	}
	return (dest);
}
