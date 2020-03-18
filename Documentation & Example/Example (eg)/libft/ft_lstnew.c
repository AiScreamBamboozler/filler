#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = malloc(content_size);
	if (!head->content)
		return (NULL);
	if (!content)
	{
		head->content = NULL;
		head->content_size = 0;
	}
	else
	{
		head->content = ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
	}
	head->next = NULL;
	return (head);
}
