/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:25:37 by mara              #+#    #+#             */
/*   Updated: 2024/12/20 17:21:47 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main() 
{
    char src[] = "Hola, mundo!";
    char dst[20];

    ft_memcpy(dst, src, 13);  // Copia los 13 bytes de 'src' a 'dst'

    printf("Destino: %s\n", dst);  // Muestra el contenido: "Hola, mundo!"
    return 0;
}
*/