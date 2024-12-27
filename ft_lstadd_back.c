/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 22:39:15 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 11:54:15 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}
/*

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Función para crear un nuevo nodo
t_list *new_node(void)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->next = NULL;
    return (new);
}

// Función para obtener el último nodo de la lista
t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);

    while (lst->next)
        lst = lst->next;

    return (lst);
}

// Función para liberar la memoria de la lista
void free_list(t_list *lst)
{
    t_list *tmp;

    while (lst)
    {
        tmp = lst;
        lst = lst->next;
        free(tmp);
    }
}

// Función principal
int main(void)
{
    t_list *head = NULL;
    t_list *new_node1;
    t_list *new_node2;
    t_list *new_node3;

    // Crear algunos nodos
    new_node1 = new_node();
    new_node2 = new_node();
    new_node3 = new_node();

    // Agregar los nodos al final de la lista
    ft_lstadd_back(&head, new_node1);
    ft_lstadd_back(&head, new_node2);
    ft_lstadd_back(&head, new_node3);

    // Imprimir los resultados de la lista ()
    t_list *temp = head;
    int i = 1;
    while (temp)
    {
        printf("Nodo %d: Dirección de memoria: %p\n", i++, (void *)temp);
        temp = temp->next;
    }

    // Liberar la memoria de la lista
    free_list(head);

    return (0);
}
*/