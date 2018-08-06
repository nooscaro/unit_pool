#include "ft_list.h"


void    ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list  *it;
    t_list  *jt;
    t_list  *i_min;

    it = *begin_list;
    while (it)
    {
        jt = it->next;
        i_min = it;
        while (jt)
        {
            if (cmp(i_min->data, jt->data) > 0)
                i_min = jt;
            jt = jt->next;
        }
        ft_swap_data(&i_min, &it);
        it = it->next;
    }
}

