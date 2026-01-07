/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larchimb <larchimb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:27:43 by larchimb          #+#    #+#             */
/*   Updated: 2025/11/10 13:04:01 by larchimb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (s);
}
/*
//Use functions one by one to avoid SEGFAULT
#include <string.h>
#include <stdio.h>
int	main(void)
{
	size_t	n = 3;
//	int	str[] = {};
	char	str[] = "Hello";
	ft_bzero(str,n);
	printf("ft : %s", str);
//	bzero(str, n);
//	printf("\n%s", str);
	return (0);
}
*/
