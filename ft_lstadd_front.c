/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 22:39:15 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/26 23:47:34 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);  // Imprime el contenido del nodo
        lst = lst->next;
    }
    printf("NULL\n");  // Al final de la lista imprimimos NULL
}

int main(void)
{
    t_list *list = NULL;

    // Crear algunos nodos con contenido
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Agregar nodos al principio de la lista
    ft_lstadd_front(&list, node1);  // Lista: Node 1 -> NULL
    ft_lstadd_front(&list, node2);  // Lista: Node 2 -> Node 1 -> NULL
    ft_lstadd_front(&list, node3);  // Lista: N 3 -> N 2 -> N1 -> NULL
	
	// Imprimir la lista después de agregar nodos
    printf("Lista después de agregar nodos al principio:\n");
    ft_lstprint(list);  // Debería imprimir: N 3 -> N 2 -> N1 -> NULL

    // El programa termina sin imprimir nada
    return 0;
}
*/