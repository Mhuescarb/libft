/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:15:42 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/21 14:27:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;
	i = 0;

	dest = (char *) malloc (ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	
	while (s1[i])
	{
		dest[i] = s1 [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char *original = "Hola Maricarmen!";
    char *copia;

    copia = ft_strdup(original);

    if (copia == NULL)
    {
        printf("Error al duplicar la cadena\n");
        return (1);
    }

    printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", copia);

    // Recuerda liberar la memoria después de usarla
    free(copia);

    return (0);
}
