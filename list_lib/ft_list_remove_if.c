#include "ft_list.h"
#include <stdlib.h>

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *it;
    t_list  *prev;

    it = *begin_list;
    prev = *begin_list;
    while (it)
    {
        if (!(cmp(data_ref, it->data)))
        {
            prev->next = it->next;
            free(it);
            it = prev;
        }
        prev = it;
        it = it->next;
    }
}

