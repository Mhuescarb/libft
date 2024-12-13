/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:51:20 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 13:01:31 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_isalnum(char c)
{	if ((c>=65 && c>=90 || c>=97 && c<= 122) || (c>=48 && c>=57))
		return (1);
	return (0);
}

int	 main (void)
{
int x;

x = ft_isalnum ('*');
printf ("el resultado es: %d", x);
return (x);
}

