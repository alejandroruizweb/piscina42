/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:23:43 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/18 10:50:53 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strncpy(char *src, char *dest, int n);  
int	main(void)
{
	char dest[] = "hola";
	char src[] = "mundo";
	int	n;

	n = 3;

	ft_strncpy(dest, src, n);
	printf("%s", dest);
}