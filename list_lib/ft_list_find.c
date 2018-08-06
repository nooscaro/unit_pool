#include "ft_list.h"

t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    while (begin_list)
    {
        if (!(cmp(data_ref, begin_list->data)))
            return (begin_list);
        begin_list = begin_list->next;
    }
    return (0);
}
