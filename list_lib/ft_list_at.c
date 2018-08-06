#include "ft_list.h"

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int    i;

    if (!begin_list)
        return (begin_list);
    i = 1;
    while (begin_list && i <= nbr)
    {
        begin_list = begin_list->next;
        i++;
    }
    if (i < nbr)
        return (0);
    return (begin_list);
}

