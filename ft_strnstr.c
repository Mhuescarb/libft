/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:58:53 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/28 11:28:55 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/* 
int main()
{
    const char *haystack1 = "Hola, Mundo!";
    const char *needle1 = "Mundo";
    const char *needle2 = "Universo";

    char *result1 = ft_strnstr(haystack1, needle1, 13);
    if (result1)
        printf("Encontrado: '%s'\n", result1);
    else
        printf("No se encontró '%s' en '%s'\n", needle1, haystack1);

    char *result2 = ft_strnstr(haystack1, needle2, 13); 
    if (result2)
        printf("Encontrado: '%s'\n", result2);
    else
        printf("No se encontró '%s' en '%s'\n", needle2, haystack1);

    const char *needle3 = "";
    char *result3 = ft_strnstr(haystack1, needle3, 13);
    if (result3)
        printf("Encontrado (needle vacío): '%s'\n", result3);
    else
        printf("No se encontró '%s' en '%s'\n", needle3, haystack1);

    return 0;
}*/