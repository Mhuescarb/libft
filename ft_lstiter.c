/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:56:34 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/27 16:19:29 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*run;

	run = lst;
	while (run)
	{
		f(run->content);
		run = run ->next;
	}
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Función para imprimir el contenido de un nodo (en este caso, un entero)
void print_content(void *content)
{
    printf("Contenido: %d\n", *(int *)content);
}

// Función principal
int main(void)
{
    t_list *head = NULL;
    t_list *node1, *node2, *node3;

    // Crear algunos nodos con valores
    node1 = ft_lstnew(malloc(sizeof(int))); // Asignamos memoria para el conte
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

    // Imprimir los resultados antes de aplicar ft_lstiter
    printf("Lista antes de aplicar ft_lstiter:\n");
    t_list *temp = head;
    while (temp)
    {
        print_content(temp->content);  // Imprimimos el contenido de cada nodo
        temp = temp->next;
    }

    // Aplicar ft_lstiter para imprimir los contenidos
    printf("\nAplicando ft_lstiter para imprimir los contenidos:\n");
    ft_lstiter(head, print_content);  // Aplicamos la función print_content a 

    // Limpiar la lista
    ft_lstclear(&head, free);  // ree para liberar el cont de los nod

    return (0);
}
*/