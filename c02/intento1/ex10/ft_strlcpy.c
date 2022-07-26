/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:11:14 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/21 12:53:20 by alruiz-c         ###   ########.fr       */
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

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)

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
	char a[] = "hola";
	char b[] = "quetal";
	char *src;
	char *dest;
	int size;

	src = a;
	dest = b;
	size = 100;
	printf("%s \n", src);
	int sup = ft_strlcpy(dest, src, size);
	printf("%s \n", dest);
	printf("%d", sup);
}
