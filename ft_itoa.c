/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:54:57 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/22 21:09:55 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_numb_size(int numb)
{
	unsigned int	len;
	len = 0;

	if (numb == 0)
			return (1);
	if ( numb < 0)
			len +=1;
	while (numb !=0)
	{
		num /= 10;
		len ++;
	}
	return (len);
}
char	*ft_itoa (int n)
{

}