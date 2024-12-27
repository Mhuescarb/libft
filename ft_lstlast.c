/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:26:17 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 10:55:44 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*run;

	run = lst;
	if (!lst)
		return (NULL);
	while (run->next)
		run = run->next;
	return (run);
}
/*
t_list  *new_node(void)
{
    t_list  *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->next = NULL;
    return (new);
}

#include <stdio.h>
void    append_node(t_list **lst)
{
    t_list  *new;
    t_list  *last;

    new = new_node();
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    last = *lst;
    while (last->next)
        last = last->next;
    last->next = new;
}

int     main(void)
{
    t_list  *head;
    t_list  *last;

    head = NULL;
    append_node(&head);
    append_node(&head);
    append_node(&head);
    append_node(&head);

    last = ft_lstlast(head);
    if (last)
        printf("El último nodo se ha encontrado.\n");
    else
        printf("La lista está vacía.\n");

    // Liberar la memoria de la lista
    t_list  *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return (0);
}
*/