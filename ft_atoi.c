/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:47:15 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/20 17:47:52 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sing;
	int	i;

	result = 0;
	sing = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sing = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	result *= sing;
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    // Ejemplos de cadenas de prueba
    const char *test1 = "   12345";   // Número positivo con espacios antes
    const char *test2 = "  -42";      // Número negativo con espacios antes
    const char *test3 = "42abc";      // Número seguido de caracteres no nu
    const char *test4 = "  00123";    // Número con ceros a la izquierda
    const char *test5 = "  +99";      // Número positivo con un signo '+'
    const char *test6 = "   0";       // Número cero con espacios antes

    // Llamada a ft_atoi con diferentes entradas y mostrar los resultados
    printf("Resultado 1: %d\n", ft_atoi(test1));  // Debería imprimir 12345
    printf("Resultado 2: %d\n", ft_atoi(test2));  // Debería imprimir -42
    printf("Resultado 3: %d\n", ft_atoi(test3));  // Debería imprimir 42
    printf("Resultado 4: %d\n", ft_atoi(test4));  // Debería imprimir 123
    printf("Resultado 5: %d\n", ft_atoi(test5));  // Debería imprimir 99
    printf("Resultado 6: %d\n", ft_atoi(test6));  // Debería imprimir 0

    return 0;
}
*/