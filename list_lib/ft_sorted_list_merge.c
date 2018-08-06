#include "ft_list.h"

void    ft_increment_node(t_list **node)
{
    (*node) = (*node)->next;
}

void    ft_push_node(t_list **node, t_list **list)
{
    (*list)->next = *node;
    ft_increment_node(node);
}

void    ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
                             int (*cmp)())
{
    t_list dummy;
    t_list *new;
    t_list  *it;

    new = &dummy;
    new->next = 0;
    it = *begin_list1;
    while (1)
    {
        if (!begin_list2)
        {
            new->next = it;
            break ;
        }
        if (!it)
        {
            new->next = begin_list2;
            break ;
        }
        if (cmp(it->data, begin_list2->data) <= 0)
            ft_push_node(&it, &new);

        else
            ft_push_node(&begin_list2, &new);
        new = new->next;
        new->next = 0;
    }
}

