/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:55:55 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 00:18:13 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* 
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Crear algunos nodos para la lista
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Crear la lista y agregar nodos
    t_list *list = NULL;
    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);

    // Obtener el tamaño de la lista
    int size = ft_lstsize(list);
    printf("La lista tiene %d nodos.\n", size);  // imp "La lista tiene 3 nodos."

    return 0;
}
*/