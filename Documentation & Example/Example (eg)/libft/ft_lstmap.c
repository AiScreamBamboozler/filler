#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*ptr;
	t_list		*head;
	t_list		*old;

	if (!lst || !f)
		return (NULL);
	ptr = lst;
	old = (*f)(ptr);
	ptr = ptr->next;
	head = old;
	while (ptr)
	{
		old->next = (*f)(ptr);
		old = old->next;
		ptr = ptr->next;
	}
	return (head);
}
