/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:38:26 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/20 21:38:03 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen (src));
	while (src [i] != '\0' && i < (size -1))
	{
		dst[i] = src [i];
		i++;
	}
	dst [i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "coucou";
    char dst[10]; memset(dst, 'A', 10);

    size_t copied = ft_strlcpy(dst, src, 1);

    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la cadena original: %zu\n", copied);
	printf("Test: %lu\n", strlen(src));
	printf("Test: %c\n", dst[0]); // 0
	printf("Test: %c\n", dst[1]); // A
	//printf("Test: %d", strlen(src) && dst[0] == 0 && dst[1] == 'A');

    return 0;
}*/