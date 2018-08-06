#include "ft_list.h"

void    ft_list_reverse(t_list **begin_list)
{
    t_list  *left;
    t_list  *right;
    t_list  *last;

    if (!(*begin_list))
        return ;
    left = *begin_list;
    right = *begin_list;
    last = 0;
    while (last != left && last != left->next)
    {
        while (right->next != last)
            right = right->next;
        ft_swap_data(&left, &right);
        last = right;
        left = left->next;
        right = left;
    }
}

