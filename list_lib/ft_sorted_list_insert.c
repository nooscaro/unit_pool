#include "ft_list.h"

void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *it;
    t_list  *prev;

    it = *begin_list;
    prev = 0;
    while (it && cmp(data, it->data) > 0)
    {
        prev = it;
        it = it->next;
    }
    if (prev)
    {
        prev->next = ft_create_elem(data);
        prev->next->next = it;
    }
    else
    {
        prev = ft_create_elem(data);
        prev->next = *begin_list;
        *begin_list = prev;
    }
}

