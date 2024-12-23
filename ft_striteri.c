/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:55:05 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/23 15:24:45 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*void ft_to_upper(unsigned int i, char *c)
{
    i = 0;
    if (*c >= 'a' && *c <= 'z')
    {
         *c = *c - 32;
    }
}
int main()
{
    char str[] = "Hola Mundo";  // Cadena de ejemplo

    // Imprimir la cadena original
    printf("Cadena original: %s\n", str);

    // Aplicamos ft_striteri para convertir cada carácter a mayúscula
    ft_striteri(str, ft_to_upper);

    // Imprimir la cadena modificada
    printf("Cadena modificada: %s\n", str);  // Debería imprimir "HOLA MUNDO"

    return 0;
}*/