#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list  *it;

    if (!(*begin_list))
    {
        *begin_list = ft_create_elem(data);
        return ;
    }
    it = *begin_list;
    while (it->next)
        it = it->next;
    it->next = ft_create_elem(data);
}