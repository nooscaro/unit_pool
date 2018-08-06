#include "ft_list.h"
#include <stdlib.h>

void    ft_list_clear(t_list **begin_list)
{
    t_list *prev;
    t_list  *next;

    if (!(*begin_list))
        return ;
    prev = *begin_list;
    while (next)
    {
        next = prev->next;
        free(prev);
        prev = next;
    }
    *begin_list = NULL;
}

