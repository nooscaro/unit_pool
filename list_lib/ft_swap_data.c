#include "ft_list.h"

void    ft_swap_data(t_list **left, t_list **right)
{
    void    *temp_data;

    temp_data = (*left)->data;
    (*left)->data = (*right)->data;
    (*right)->data = temp_data;
}

