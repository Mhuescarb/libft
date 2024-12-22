/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:16:12 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/22 13:20:58 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen (s + start))
		len = ft_strlen (s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int main(void)
{
    const char *str = "Hola Mundo";
    unsigned int start = 0;
    size_t len = 4;

    // Probar la función ft_substr
    char *result = ft_substr(str, start, len);

    if (result)
    {
        printf("Subcadena: '%s'\n", result);
        free(result); // No olvides liberar la memoria
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return 0;
}
*/