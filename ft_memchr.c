/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:02:46 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/20 18:38:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*int main() 
{   
    char str[] = "Hola, mundo!";
    char c = 'm';
    
    void *result = ft_memchr(str, c, ft_strlen(str));
    
    if (result != NULL) 
    {
        printf("caracter '%c' se encontró en: %ld\n", c, (char *)result - str);
    } 
    else 
    {
        printf("El carácter '%c' no se encontró.\n", c);
    }
    return 0;
}
*/