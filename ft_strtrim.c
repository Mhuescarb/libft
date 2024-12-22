/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:15:21 by mhuescar          #+#    #+#             */
/*   Updated: 2024/12/22 20:47:17 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)

{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}

/*int main()
{
    // Definimos la cadena de entrada y el conjunto de caracteres a recortar
    const char *str = "              \t\nHello World\n\t   ";
    const char *set = " \n\t"; // Queremos recortar esp, saltos y tabs
    // Llamamos a la función ft_strtrim para obtener la cadena recortada
    char *trimmed_str = ft_strtrim(str, set);

    // Verificamos si la función devolvió NULL (por si hubo algún error)
    if (trimmed_str != NULL) {
        // Imprimimos los resultados
        printf("Cadena original: '%s'\n", str);
        printf("Cadena recortada: '%s'\n", trimmed_str);

        // Liberamos la memoria de la cadena recortada
        free(trimmed_str);
    } else {
        // Si la función devolvió NULL, indicamos un error
        printf("Error al recortar la cadena.\n");
    }

    return 0;
}*/