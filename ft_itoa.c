/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:54:57 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/23 14:50:34 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_numb_size(int numb)
{
	unsigned int	len;

	len = 0;
	if (numb == 0)
		return (1);
	if (numb < 0)
		len += 1;
	while (numb != 0)
	{
		numb /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)

{
	long	numb;
	int		len;
	char	*result;

	numb = n;
	len = ft_numb_size(numb);
	result = (char *)malloc(sizeof(char) *(len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (numb == 0)
	{
		result[--len] = '0';
	}
	if (numb < 0)
	{
		result[0] = '-';
		numb = -numb;
	}
	while (numb > 0)
	{
		result[--len] = (numb % 10) + '0';
		numb /= 10;
	}
	return (result);
}

/*int main()
{
    int num1 = 1234;
    int num2 = -5678;
    int num3 = 0;

    char *result1 = ft_itoa(num1);
    char *result2 = ft_itoa(num2);
    char *result3 = ft_itoa(num3);

    // Imprimir los resultados
    printf("Resultado de ft_itoa(%d): %s\n", num1, result1);
    printf("Resultado de ft_itoa(%d): %s\n", num2, result2);
    printf("Resultado de ft_itoa(%d): %s\n", num3, result3);

    // Liberar memoria
    free(result1);
    free(result2);
    free(result3);

    return 0;
}*/
