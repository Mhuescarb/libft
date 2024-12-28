/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:22:43 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/28 10:24:42 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_obj = ft_lstnew(content);
		if (!new_obj)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_obj;
		else
			ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Función para duplicar el contenido de un nodo (simple ejemplo de función f)
void *duplicate_content(void *content)
{
    int *new_content = malloc(sizeof(int));
    if (!new_content)
        return (NULL);
    *new_content = *(int *)content * 2;  // Duplicamos el valor
    return (new_content);
}

// Función para liberar el contenido de un nodo (simple ejemplo de función del)
void del(void *content)
{
    free(content);  // Liberamos la memoria del contenido
}

// Función principal
int main(void)
{
    t_list *head = NULL;
    t_list *node1, *node2, *node3;
    t_list *new_list;

    // Crear algunos nodos con valores
    node1 = ft_lstnew(malloc(sizeof(int))); // Asignamos mem para el cont
    if (!node1)
        return (1);  // Error si no se pudo crear el nodo
    *(int *)(node1->content) = 10;  // Asignamos el valor 10 al contenido

    node2 = ft_lstnew(malloc(sizeof(int))); // Creamos otro nodo
    if (!node2)
        return (1);
    *(int *)(node2->content) = 20;  // Asignamos el valor 20 al contenido

    node3 = ft_lstnew(malloc(sizeof(int))); // Creamos otro nodo
    if (!node3)
        return (1);
    *(int *)(node3->content) = 30;  // Asignamos el valor 30 al contenido

    // Añadir nodos al final de la lista
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    // Imprimir la lista original
    printf("Lista original:\n");
    t_list *temp = head;
    while (temp)
    {
        printf("Contenido: %d\n", *(int *)(temp->content));
        temp = temp->next;
    }

    // Usamos ft_lstmap para crear una nueva lista con los valores duplicados
    new_list = ft_lstmap(head, duplicate_content, del);

    // Imprimir la nueva lista (la que fue procesada con ft_lstmap)
    printf("\nNueva lista (después de ft_lstmap):\n");
    temp = new_list;
    while (temp)
    {
        printf("Contenido: %d\n", *(int *)(temp->content));  // Cont dup
        temp = temp->next;
    }

    // Liberar ambas listas
    ft_lstclear(&head, del);  // Liberar la lista original
    ft_lstclear(&new_list, del);  // Liberar la nueva lista

    return (0);
}
*/