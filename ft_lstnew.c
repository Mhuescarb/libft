/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:53:39 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/26 19:29:30 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
/* 
int	main(void)
{
    t_list	*node1;
    char	*data;

    // Inicializamos el contenido para el nodo
    data = "Hello, World!";

    // Creamos el nuevo nodo con el contenido
    node1 = ft_lstnew(data);

    // Verificamos si la creación fue exitosa
    if (node1 != NULL)
    {
        // Imprimimos el contenido del nodo
        printf("Content: %s\n", (char *)node1->content);
        printf("Next node: %p\n", (void *)node1->next);  // Debería ser NULL
    }
    else
    {
        // Si el nodo no se crea correctamente, mostramos un mensaje de error
        printf("Error creating node!\n");
    }

    // Liberamos la memoria del nodo
    free(node1);

    return (0);
}*/
