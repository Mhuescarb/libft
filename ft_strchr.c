/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:07:28 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/22 20:09:54 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/*
int main(void)
{
    const char *str = "Hola, mundo!";
    char ch = 'm';

    char *result = ft_strchr(str, ch);
    if (result) {
        printf("El carácter '%c' se encuentra en : %ld\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", ch);
    }

    // Probar con un carácter no encontrado
    ch = 'z';
    result = ft_strchr(str, ch);
    if (result) {
        printf("El carácter '%c' se encuentra en+: %ld\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", ch);
    }

    return 0;
}
*/