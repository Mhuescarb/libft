/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:30:48 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/10 12:36:09 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if(c>=65 && c<=90 || c>= 97 && c<=122)

		return (1);
	return (0);
}
int main (void)
{
	int x;
	x = ft_isalpha('t');
printf ("el resultado es :%d", x);
return (x);
}
