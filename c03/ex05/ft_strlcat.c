/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:37:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/23 13:08:47 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_numb(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = ft_numb(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (n);
}

int	main(void)
{
	char src[] = "hola";
	char dest[] = "quetal";
	int size;

	size = 100;
	printf("%s \n", src);
	int sup = ft_strlcat(dest, src, size);
	printf("%s \n", dest);
	printf("%d", sup);
}
