/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:06:34 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 16:19:01 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Función para crear un nuevo nodo (con un valor de tipo int)
t_list *new_node(int value)
{
    t_list *new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = malloc(sizeof(int));  // Reserva espacio para el cont (int)
    if (!new->content)
    {
        free(new);
        return (NULL);
    }
    *(int *)(new->content) = value;  // Asigna el valor al contenido
    new->next = NULL;
    return (new);
}

// Función `del` que libera el contenido de un nodo
void del(void *content)
{
    free(content);  // Libera la memoria del contenido (un puntero a int)
}

// Función para imprimir la lista (solo el contenido de los nodos)
void print_list(t_list *head)
{
    t_list *temp = head;
    while (temp)
    {
        printf("Contenido: %d\n", *(int *)(temp->content));  // Imprime el 
        temp = temp->next;
    }
}

// Función principal
int main(void)
{
    t_list *head = NULL;
    t_list *node1, *node2, *node3;

    // Crear algunos nodos con valores
    node1 = new_node(10);
    node2 = new_node(20);
    node3 = new_node(30);

    // Enlazar los nodos
    head = node1;
    node1->next = node2;
    node2->next = node3;

    printf("Lista antes de eliminar un nodo:\n");
    print_list(head);

    // Eliminar el segundo nodo (node2)
    printf("\nEliminando el segundo nodo...\n");
    ft_lstdelone(node2, del);  // Elimina el nodo 2

    // Imprimir la lista después de eliminar el nodo
    printf("\nLista después de eliminar un nodo:\n");
    print_list(head);

    // Liberar la memoria de la lista restante
    ft_lstdelone(node1, del);  // Elimina el primer nodo
    ft_lstdelone(node3, del);  // Elimina el último nodo

    return (0);
}
*/