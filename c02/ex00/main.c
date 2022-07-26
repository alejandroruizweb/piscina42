/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:23:43 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/07/18 09:27:11 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strcpy(char *src, char *dest);  
int	main(void)
{
	char	dest[] = "hola";
	char	src[] = "fin";
	
	ft_strcpy(dest, src);
	printf("%s", dest);

}