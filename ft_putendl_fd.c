/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:04:36 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/26 14:51:21 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

/* int main()
{
    char *mensaje1 = "Hola, Mundo!";
    char *mensaje2 = "¡Bienvenidos a libft con salto de linea incluido!";
  

    // Llamadas a ft_putstr para imprimir las cadenas
    ft_putendl_fd(mensaje1, 1);  
  
    ft_putendl_fd(mensaje2, 1);
  
  
   return 0;
}
*/