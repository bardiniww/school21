#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *add;

	if (!lst || !f)
		return (NULL);
	if (!(add = f(lst)))
		return (NULL);
	start = add;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(add->next = f(lst)))
		{
			free(add->next);
			return (NULL);
		}
		add = add->next;
	}
	return (start);
}
