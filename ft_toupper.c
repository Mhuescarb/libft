/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:12:22 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/28 11:29:46 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -32);
	return (c);
}
/*
#include <stdio.h>
int main() 
int	ft_toupper(int c)
{
    char lower = 'a';
    char upper = 'A';
    
    // Prueba con un carácter en minúscula
    printf("Original: %c, ft_toupper: %c\n", lower, ft_toupper(lower));
    
    // Prueba con un carácter en mayúscula
    printf("Original: %c, ft_toupper: %c\n", upper, ft_toupper(upper));

    // Prueba con un carácter que no cambia
    char non_alpha = '1';
    printf("Original: %c, ft_toupper: %c\n", non_alpha, ft_toupper(non_alpha));

    return 0;
}
*/