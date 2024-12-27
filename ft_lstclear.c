/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:39:51 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 14:06:06 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*run;

	while (*lst)
	{
		run = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = run;
	}
	free(*lst);
	*lst = NULL;
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Función para liberar el contenido de un nodo
// En este caso, el contenido será un entero
void del(void *content)
{
    free(content);  // Liberamos la memoria del contenido
}

// Función principal
int main(void)
{
    t_list *head = NULL;
    t_list *node1, *node2, *node3;

    // Crear algunos nodos con valores
    node1 = ft_lstnew(malloc(sizeof(int))); // Asignamos memoria para el cont
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

    // Enlazar los nodos
    head = node1;
    node1->next = node2;
    node2->next = node3;

    // Imprimir la lista antes de limpiar
    printf("Lista antes de limpiar:\n");
    t_list *temp = head;
    while (temp)
    {
        printf("Contenido: %d\n", *(int *)(temp->content));  // Imprimimos
        temp = temp->next;
    }

    // Limpiar la lista usando ft_lstclear
    printf("\nLimpiando la lista...\n");
    ft_lstclear(&head, del);  // Usamos la función `del` para liberar el cont

    // Intentamos imprimir la lista después de limpiarla
    printf("\nLista después de limpiar:\n");
    if (head == NULL)
        printf("La lista está vacía.\n");

    return (0);
}
*/