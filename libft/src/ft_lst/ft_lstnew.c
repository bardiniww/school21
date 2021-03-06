#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newel;

	if (!(newel = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	newel->next = NULL;
	if (!content)
	{
		newel->content = NULL;
		newel->content_size = 0;
		return (newel);
	}
	if (!(newel->content = malloc(content_size)))
	{
		free(newel);
		return (NULL);
	}
	newel->content = ft_memcpy(newel->content, content, content_size);
	newel->content_size = content_size;
	return (newel);
}
