/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:07:39 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/17 17:09:57 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] && x < size)
		x++;
	while (src[y] && (x + y + 1) < size)
	{
		dst[x + y] = src[y];
		y++;
	}
	if (x < size)
		dst[x + y] = '\0';
	return (x + ft_strlen (src));
}
/*
 #include <stdio.h>
#include <string.h>  // Para comparar con strlcat (función estándar)
#include "libft.h"  // Asegúrate de tener ft_strlcat en este archivo

int main() {
    char dst[50] = "Hello, ";  // Espacio suficiente para concatenar
    const char *src = "World!";
    size_t size = 50;

    // Usamos ft_strlcat y la función estándar para comparar resultados
    printf("Antes de ft_strlcat: '%s'\n", dst);
    size_t result = ft_strlcat(dst, src, size);
    printf("Después de ft_strlcat: '%s'\n", dst);
    printf("Longitud total esperada: %zu\n", result);

    // Para comparar con la versión estándar (solo como referencia)
    char dst2[50] = "Hello, ";
    size_t result2 = strlcat(dst2, src, size);
    printf("\nComparación con strlcat:\n");
    printf("Después de strlcat: '%s'\n", dst2);
    printf("Longitud total esperada con strlcat: %zu\n", result2);
    return 0;
}
*/