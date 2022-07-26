/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:30:09 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/23 14:54:20 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}	
		//Con esto va avanzando hasta el final del destino. Así empieza a copiar el src justo
		//desde el fin y no lo pisa.
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	//Con esto copia uno dentro de otro.
	dest[j] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "Alejandro";
	char dest[] = "Ruiz";
    unsigned int nb;
    nb = 8;

	printf("%s", ft_strncat(dest, src, nb));

	return(0);
}
//Esta función copia una string a continuación de otra. hasta el valor nb.