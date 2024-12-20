/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:38:26 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/20 20:16:27 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen (src));
	while (src [i] != '\0' && i < size -1)
	{
		dst[i] = src [i];
		i++;
		dst [i] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <stdio.h>
int main()
{
    char src[] = "Hola, mundo!";
    char dst[10];

    size_t copied = ft_strlcpy(dst, src, sizeof(dst));

    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la cadena original: %zu\n", copied);

    return 0;
}*/