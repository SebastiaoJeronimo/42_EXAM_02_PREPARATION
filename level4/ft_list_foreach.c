#include "ft_list.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *begin = begin_list;
    while (begin){
        (*f)(begin->data);
        begin = begin->next;
    }
}