/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:04:36 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/23 16:24:18 by mhuescar         ###   ########.fr       */
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

int main()
{
    char *mensaje1 = "Hola, Mundo!";
    char *mensaje2 = "¡Bienvenidos a la biblioteca libft!";
    char *mensaje3 = NULL;  // Cadena NULL para probar el caso en que no hay nada que imprimir

    // Llamadas a ft_putstr para imprimir las cadenas
    ft_putstr_fd(mensaje1);  // Imprime "Hola, Mundo!"
    ft_putstr_fd("\n");       // Salto de línea para separar la salida
    ft_putstr_fd(mensaje2);  // Imprime "¡Bienvenidos a la biblioteca libft!"
    ft_putstr_fd("\n");
    ft_putstr_fd(mensaje3);  // No imprimirá nada, ya que la cadena es NULL
    ft_putstr_fd("\n");

    return 0;
}