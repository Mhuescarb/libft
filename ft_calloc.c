/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:07:54 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/20 20:42:40 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mal;
	size_t			i;

	mal = malloc(count * size);
	i = 0;
	if (!mal)
		return (NULL);
	while (i < count * size)
		mal[i++] = 0;
	return (mal);
}
/*
#include <stdio.h>
#include "libft.h"  // Asegúrate de que ft_calloc esté correctamente declarado


int main()
{
    size_t count = 10;  // Cantidad de elementos que vamos a reservar
    size_t size = sizeof(int);  // Tamaño de cada elemento (en este caso, int)

    // Llamamos a ft_calloc para asignar memoria para 10 enteros, inic a cero
    int *mal = ft_calloc(count, size);

    // Verificamos si malloc o calloc fallaron
    if (mal == NULL) {
        printf("Error de asignación de memoria.\n");
        return 1;  // Retornamos 1 si hubo un error
    }
    // Imprimimos los valores en el arreglo, deberían ser todos ceros
    printf("Contenido del arreglo después de ft_calloc:\n");
    for (size_t i = 0; i < count; i++) {
        printf("mal[%zu] = %d\n", i, mal[i]);  // Debe imprimir 0 en todos
    }
    // Modificamos algunos valores para ver que podemos escribir en el arreglo
    mal[0] = 42;
    mal[4] = 99;
    // Imprimimos los valores después de modificarlos
    printf("\nContenido del arreglo después de modificar algunos valores:\n");
    for (size_t i = 0; i < count; i++) {
        printf("mal[%zu] = %d\n", i, mal[i]);  //arr[0] y arr[4] deben ser dif
    }

    // Liberamos la memoria que hemos asignado
    free(mal);

    return 0;  // El programa terminó correctamente
}
*/