/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:35:42 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/22 19:04:14 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
int main() 
{
    char upper = 'A';
    char lower = 'a';
    
    // Prueba con un carácter en minúscula
    printf("Original: %c, ft_tolower: %c\n", lower, ft_tolower(lower));
    
    // Prueba con un carácter en mayúscula
    printf("Original: %c, ft_tolower: %c\n", upper, ft_tolower(upper));

    // Prueba con un carácter que no cambia
    char non_alpha = '1';
    printf("Original: %c, ft_tolower: %c\n", non_alpha, ft_tolower(non_alpha));

    return 0;
}
*/
