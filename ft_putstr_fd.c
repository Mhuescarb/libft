/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:04:36 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/26 11:57:04 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

/*int main()
{
    char *mensaje1 = "Hola, Mundo!";
    char *mensaje2 = "¡Bienvenidos a la biblioteca libft!";
  

    // Llamadas a ft_putstr para imprimir las cadenas
    ft_putstr_fd(mensaje1, 1);  // Imprime "Hola, Mundo!"
    ft_putstr_fd("\n", 1);       // Salto de línea para separar la salida
    ft_putstr_fd(mensaje2, 1);  // Imprime "¡Bienvenidos a la biblioteca libft!"
    ft_putstr_fd("\n", 1); 
  
  
    return 0;
}*/