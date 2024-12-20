/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:56:37 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/20 11:06:03 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main() {
    // Caso 1: Memmove sin superposición
    char src1[] = "Hola, Mundo!";
    char dst1[20];

    printf("Antes de memmove: dst1 = \"%s\"\n", dst1);
    ft_memmove(dst1, src1, 13);
    printf("Después de memmove: dst1 = \"%s\"\n\n", dst1);

    // Caso 2: Memmove con superposición (cuando dst está después de src)
    char src2[] = "¡Memmove con overlap!";
    printf("Antes de memmove: src2 = \"%s\"\n", src2);
    ft_memmove(src2 + 4, src2, 12);  // Mueve parte de 'src2' dentro de sí mismo
    printf("Después de memmove: src2 = \"%s\"\n", src2);

    // Caso 3: Memmove cuando dst está antes de src
    char src3[] = "Texto fuente";
    char dst3[20];

    ft_memmove(dst3, src3, 12);
    printf("dst3 después de memmove: \"%s\"\n", dst3);

    return 0;
}
*/