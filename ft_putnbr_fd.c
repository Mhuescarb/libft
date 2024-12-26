/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:35:20 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/26 14:30:22 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		numb = (unsigned int)(n * -1);
	}
	else
		numb = (unsigned int)n;
	if (numb >= 10)
		ft_putnbr_fd(numb / 10, fd);
	ft_putchar_fd((char)(numb % 10 + 48), fd);
}

/*int main (void)
{
ft_putnbr_fd(-76543234, 1);
return 0;
}*/