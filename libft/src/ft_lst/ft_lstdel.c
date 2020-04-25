#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*head;
	t_list	*next;

	if (!alst || !del || !(*alst))
		return ;
	head = *alst;
	while (head != NULL)
	{
		next = head->next;
		del(head->content, head->content_size);
		free(head);
		head = next;
	}
	*alst = NULL;
}
