/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:16:23 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/17 16:48:38 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)

{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
  /*int	main (void)
	{
	printf("%d\n", ft_strlen ("maricarmen!"));
	return (0);
}*/