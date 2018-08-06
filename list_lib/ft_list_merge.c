#include "ft_list.h"

void    ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list  *it;
    t_list  *prev;

    it = *begin_list1;
    prev = 0;
    while (it)
    {
        prev = it;
        if (!(prev->next))
            break ;
        it = it->next;
    }
    if (prev)
        prev->next = begin_list2;
    else
        *begin_list1 = begin_list2;
}

