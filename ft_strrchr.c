/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:40:49 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/28 11:28:55 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		res = (char *) &s[i];
	return (res);
}
/*int main()
{
    const char *str = "Hello, world!";
    char *result;

    // Buscar el carácter 'o' en la cadena
    result = ft_strrchr(str, 'o');
    
    if (result)
        printf("Última ocurrencia de 'o': %s\n", result);
    else
        printf("Carácter no encontrado\n");

    // Buscar el carácter 'l' en la cadena
    result = ft_strrchr(str, 'l');
    if (result)
        printf("Última ocurrencia de 'l': %s\n", result);
    else
        printf("Carácter no encontrado\n");

    // Buscar el carácter que no está en la cadena
    result = ft_strrchr(str, 'z');
    if (result)
        printf("Última ocurrencia de 'z': %s\n", result);
    else
        printf("Carácter no encontrado\n");
    return 0;
}*/