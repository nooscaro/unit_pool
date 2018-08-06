#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *new;

    if (!(*begin_list))
    {
        *begin_list = ft_create_elem(data);
        return ;
    }
    new = ft_create_elem(data);
    new->next = *begin_list;
    *begin_list = new;
}

