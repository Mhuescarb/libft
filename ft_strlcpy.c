/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:38:26 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/19 16:25:30 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy (char *dst, char *src, unsigned int size)
{
	unsigned int i;
	i = 0;
    while (src [i] != '\0' && i < size-1)
    {
        dst[i] = src [i];
			i++;
    }
    return (ft_strlen(src));
}
/*#include <stdio.h>
int main(void)
{
    char src[] = "Hola, mundo!";
    char dst[20]; // Asegúrate de que haya espacio suficiente para la copia

    unsigned int size = 5; // Tamaño para la copia

    // Llamada a ft_strlcpy
    unsigned int result = ft_strlcpy(dst, src, size);

    // Mostrar resultados
    printf("Cadena fuente: %s\n", src);
    printf("Cadena destino: %s\n", dst);
    printf("Longitud de la cadena fuente: %u\n", result);

    return 0;
}*/