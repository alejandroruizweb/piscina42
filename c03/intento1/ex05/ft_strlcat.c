/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:37:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/24 12:52:57 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	largo;

	i = 0;
	largo = 0;
	while (dest[largo] != '\0')
		largo++;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[largo] = src[i];
		i++;
		largo++;
	}
	dest[i] = '\0';
	return (largo);
}
