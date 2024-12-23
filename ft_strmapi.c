/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:27:36 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/23 14:46:24 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen (s) +1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*	char example_func(unsigned int i, char c)
{
    return c + i;  // Suma el índice al valor ASCII del carácter.
}
int main()
{ char *str = "Hola Mundo";

    // Aplicamos ft_strmapi a la cadena de entrada con la función example_func
    char *result = ft_strmapi(str, example_func);

    if (result)
    {
        // Si la asignación de memoria fue exitosa, imprimimos el resultado
        printf("Resultado: %s\n", result);

        // No olvides liberar la memoria después de usarla
        free(result);
    }
    else
    {
        // En caso de error en la asignación de memoria
        printf("Error en la asignación de memoria o parámetros nulos.\n");
    }

    return 0;
}*/
