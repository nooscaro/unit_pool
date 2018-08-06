#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref,
                        int (*cmp)())
{
    while (begin_list)
    {
        if (!(cmp(data_ref, begin_list->data)))
            f(begin_list->data);
        begin_list = begin_list->next;
    }
}

