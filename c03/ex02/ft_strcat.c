/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:36:49 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/20 18:19:48 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
		//Con esto va avanzando hasta el final del destino. Así empieza a copiar el src justo
		//desde el fin y no lo pisa.
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	//Con esto copia uno dentro de otro.
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "Alejandro";
	char dest[] = "Ruiz Córdoba";
ft_strcat(dest, src);
printf("%s", dest);

}

//Esta función copia una string a continuación de otra.