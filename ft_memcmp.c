/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar < mhuescar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:46:51 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/19 14:15:09 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*#include <string.h>
int main()
{
    char str1[] = "Hola, Mundo!";
    char str2[] = "Hola, Mundo!";
    char str3[] = "Hola, Universe!";
    
    int result1 = ft_memcmp(str1, str2, 13);  
    int result2 = ft_memcmp(str1, str3, 13);

    if (result1 == 0)
        printf("str1 y str2 son iguales.\n");
    else
        printf("str1 y str2 son diferentes.\n");

    if (result2 == 0)
        printf("str1 y str3 son iguales.\n");
    else
        printf("str1 y str3 son diferentes.\n");

    int standard_result = memcmp(str1, str3, 13);
	
    if (standard_result == 0)
        printf("str1 y str3 son iguales (memcmp estándar).\n");
    else
        printf("str1 y str3 son diferentes (memcmp estándar).\n");

    return 0;
}
*/